# C++

[toc]

## 原始链接

https://mp.weixin.qq.com/s/Isr5-FojMTRK36g-Gh2_yQ

## 数组

1. 结构体可以直接赋值实现复制，但是数组不支持复制

    ```c++
    struct St {
      int m1;
      double m2;
    };
    void demo() {
      St st1;
      St st2 = st1; // OK
        
      int arr1[5];
      int arr2[5] = arr1; // ERR
    }
    ```

2. 只能通过首地址+长度的方式传递数组

    ```c++
    void f1(int *arr, size_t size) {}
    
    // 语法糖，无论中括号怎么写，数字都会被忽略！！！全部隐式转换为第一行这种首元素指针类型
    void f(int *arr);
    void f(int arr[]);
    void f(int arr[5]);
    void f(int arr[100]);
    
    // c++可以通过引用语法传递数组并限制长度，不过一般不这样用
    void f1(int (&arr)[5]); // 必须传int[5]类型
    ```

3. c++数组语法

    ```c++
    int a[5];
    int *b = new int[5];
    
    // 1. c++11引入std::array表示定长数组
    #include <array>
    using namespace std;
    
    void demo() {
    	array<int, 5> a0 = {0, 1, 2, 3, 4};
        array<int, 5> a1 = a0;
        int size = 5;
        int b[size];			// ok
        array<int, size> a2;	// error，不能用变量指定
        a1 = b;					// error，不能用数组指定
    }
    // array支持at(带边界检查)、[]、front、back、data(数组第一个元素地址指针)访问，支持begin、end、rbegin、rend遍历、以及其他函数如empty、size、max_size、fill、swap
    
    // 2. c++使用vector表示变长数组，对于结尾添加和移除元素比较高效
    vector<int> v(2, 5); 	// 初始化长度为2，初始值为5的数组
    vector<int> v = {1, 2};
    vector<int> v(v1);		// 用另一个数组初始化
    for (auto & i : v) {	// 遍历
    
    }
    // size获取当前元素个数，capacity获取总大小
    // resize会将多的元素补0，也可以指定初始值
    v.resize(5);		// 补0
    v.resize(5, 10);	// 补10
    // 两个数组合并，需要引入<iterator>头文件
    vector<int> vec1 = {1, 2, 3};
    vector<int> vec2 = {4, 5, 6};
    std::copy(vec1.begin(), vec1.end(), std::back_inserter(vec2));
    ```

## 类型说明符

1. 不是从左往右，比较反直觉

    ```c++
    int arr[5];	// 长度为5的整型数组，int和[5]却没有写到一起
    int *a1[5]; // 长度为5的元素都是指针的数组
    int (*a2)[5]; // 指向int[5]类型的指针
    ```

2. c++的类型说明符不仅仅定义了类型，也可能定义动作语义

    ```c++
    int a; 		// 不仅定义了int类型，还定义了变量a
    int f();	// 定义了f函数，int表示返回值是int类型
    ```

    高阶函数更难读，比如

    ```c++
    // DC函数，参数是double (*)(double)，返回值是double (*)(double)
    double (*DC(double (*)(double)))(double);	// 输入函数，输出函数的导函数
    
    // 右置语法可以稍微优化一下可读性
    auto f1() -> int;
    auto DC(auto (*)(double) -> double) -> auto (*)(double) -> double;	// 这里auto看起来还是比较突兀
    ```

3. Swift将类型符和动作语义分离

    ```swift
    var a: Int			// 定义变量
    func f1()->Int {	// 定义函数
        
    }	
    func DC(f: Double->Double) -> Double->Double {	// 高阶函数
    }
    ```

## 指针偏移

1. 指针偏移有很大自由度，但也容易发生越界

    ```c++
    // 这里size并没有强制要求和数组大小一致
    void f(int *arr, size_t size) {}
    
    void demo() {
    	int arr[5];
    	f(arr, 6); // 可能导致越界
        
    	int a = 0;
    	int *p2 = &a;
    	a[1] = 10; // 越界
    }
    ```

2. 其他语言要么直接取消指针类型语法，引入值类型和引用类型概念（java、c#），要么保留指针概念，但仅用于明确指向和引用的含义，不提供指针偏移运算（Go、Swift）。还有更奇葩的OC，完全保留指针用法，但是对象强制放堆中，栈上只放指针对其的引用

    ```swift
    // Swift非必要不使用
    func f1(_ ptr: UnsafeMutablePointer<Int>) {
      ptr.pointee += 1 // 给指针所指向的值加1
    }
    
    func demo() {
      var a: Int = 5
      f1(&a)
    }
    
    // OC
    void demo() {
    	NSObject *obj = [[NSObject alloc] init];
        // 例如调用obj的description方法
        NSString *desc = [obj description];
        // 指针仍可偏移，但几乎不会有人这样来写：
        [(obj+1) description]; // 也会越界
    }
    ```

## 隐式类型转换

隐式类型转换有时很方便简洁，但也可能发生奇怪问题

```c++
double a = 5; // int->double
int b = a * a; // double->int
int c = '5' - '0'; // char->int

// 问题示例1
#define ARR_SIZE(arr) (sizeof(arr) / sizeof(arr[0]))
void f1() {
    int arr[5];
    size_t size = ARR_SIZE(arr); // OK
}
void f2(int arr[]) {
    // 这里根据上文可知int arr[]会隐式转换为int *arr，此时再去计算sizeof，其实计算的是指针的大小，而不是数组的大小
    size_t size = ARR_SIZE(arr); // WRONG
}
```

## 赋值语句返回值

1. 赋值语句自带返回值

    ```c++
    int a1, a2;
    bool b = a1 = a2;	// 即使a1==a2错写成a1=a2也能编译成功，并赋左值引用
    
    // 比如a==1写成a=1，由于赋值语句自带返回值，且非布尔值有布尔意义，使条件恒为真
    if (a = 1) {
    }
    ```

2. c++自定义类型定义赋值函数时强制要求返回值为当前类型的左值引用，并且发生继承时要记得处理父类赋值

    ```c++
    class Base {
     public:
      Base &operator =(const Base &);
    };
    
    class Ch : public Base {
       public:
        Ch &opeartor =(const Ch &ch) { // 拷贝赋值函数
            this->Base::operator =(ch);
            // 或者写成 *static_cast<Base *>(this) = ch;
            // ...
            return *this;
        }
        
        Ch &operator =(Ch &&); // 移动赋值函数
        Ch &operator =(int a); // 其他的赋值函数
    };
    ```

3. 新兴语言Swift、Go取消了赋值语句的返回值

    ```swift
    let a = 5
    var b: Int
    var c: Int
    c = (b = a) // ERR
    ```



## 非布尔类型的布尔意义

原来C语言没有布尔类型，所有是非都是用int来做（true为1，false为0）但可能会出问题，比如：

```c++
// 示例1
int judge = 2; 			// 用了int表示了判断逻辑
if (judge == true) {} 	// 但这里的条件其实是false，因为true会转为1，2 == 1是false

// 示例2
true + true != true		// true + true = 2
!!2 == 1				// !!2 = 1
(2 == true) == false	// 2 == true结果为0
```

有些语言如Go和Swift都取消了非布尔类型的布尔意义，必须通过布尔运算才能当布尔类型使用 

## 解指针类型

指针的解类型是可以改变的，只要保存首地址并按另一种类型来解，就可以做到改变类型

```c++
int a = 300;
uint8_t *p = reinterpret_cast<uint8_t *>(&a);
*p = 1; // 这里其实就是把a变成了uint8_t类型

// 还有更野的操作，比如
struct S1 {
  short a, b;
};

struct S2 {
  int a;
};

void demo() {
  S2 s2;
  S1 *p = reinterpret_cast<S1 *>(&s2);
  p->a = 2;	// 低地址
  p->b = 1;	// 高地址

  std::cout << s2.a; // 这里会输出65538，其实就是00000000 00000001 00000000 00000010
}
```

## 后置自增/自减

这个特性在c中问题不大，但是在c++中可能会有问题，比如：

```c++
// 示例1
// 这里iter是个对象，如果后置++，一定会发生复制
for (auto iter = ve.begin(); iter != ve.end(); iter++) {
}

// 示例2
// 对于类类型，需要临时保存一份原来的值
class Element {
public：
    // 前置++，返回引用
    Element &operator ++() {
        ele++;
        return *this;
    }
    // 后置++，返回非引用
    Element operator ++(int) {
        // 为了最终返回原值，所以必需保存一份快照用于返回
        Element tmp = *this;
    	ele++;
    	return tmp;
  	}
private:
    int ele;
};
```

其他语言如Go只保留语法，没有返回值，不用区分前置后置，Swift则没有这个语法

## 类型长度

| 类型                          | 32 位环境长度 | 64 位环境长度 |
| :---------------------------- | :------------ | :------------ |
| int/unsigned                  | 4B            | 4B            |
| long/unsigned long            | 4B            | 8B            |
| long long/ unsigned long long | 8B            | 8B            |

可以看到long/unsigned long在不同系统中长度不一样。解决办法C语言引入stdint.h头文件，C++引入cstddef头文件，里面定义了定长类型如int64_t等，但是还是存在问题，比如

1. 没有定长格式符，如uint64_t在32位环境是%llu，但在64位环境是%lu，可以定义宏解决，但会让字符串断开，不直观

    ```c++
    #if(sizeof(void*) == 8)
    #define u64 "%lu"
    #else
    #define u64 "%llu"
    #endif
    
    void demo() {
      uint64_t a;
      printf("a="u64, a);
    }
    ```

2. 64位环境中，long和long long都是64位长，但编译器会识别为不同类型，可能会出现类型推导不符合预期的情况

    ```swift
    template <typename T>
    void func(T t) {}
    
    template <>
    void func<int64_t>(int64_t t) {}
    // 这里int64_t和long long在64位环境虽然没区别，但是还是会识别为不同类型
    void demo() {
      long long a;
      func(a); // 会匹配通用模板，而匹配不到特例
    }
    ```

## 格式化字符串

c++的格式化字符串和c完全一致，对于结构体、数组、元组等组合类型都无法匹配到格式符，必须拆开打印

```c++
struct Point {
  double x, y;
};

void Demo() {
    // 打印Point
    Point p {1, 2.5};
    printf("(%lf,%lf)", p.x, p.y); // 无法直接打印p
    // 打印数组
    int arr[] = {1, 2, 3};
    for (int i = 0; i < 3; i++) {
        printf("%d, ", arr[i]); // 无法直接打印整个数组
    }
    // 打印元组
    std::tuple tu(1, 2.5, "abc");
    printf("(%d,%lf,%s)", std::get<0>(tu), std::get<1>(tu), std::get<2>(tu)); // 无法直接打印整个元组
}
```

对于字符串，如果用%s来格式化，会因为中间有\0字符导致无法打印完全

```c++
std::string str = "abc";
str.push_back('\0');
str.append("abc");

char buf[32];
sprintf(buf, "str=%s", str.c_str());
```

OC引入%@，调用对象的`description`方法解决上述问题

## 枚举

1. 无法前置声明，即先声明后定义，因为`enum`类型是动态选择基础类型，取值范围小的时候是int16_t，取值范围大时则可能是int32_t或int64_t等，所以没有定义完编译器不知道其具体类型，无法使用

    ```c++
    enum Season;
    
    struct Data {
      Season se; // ERR
    };
    
    enum Season {
      Spring,
      Summer,
      Autumn,
      Winter
    };
    
    // 但是c++允许前置声明时指定类型，这样就能直接用了
    enum Season : int;
    ```

2. 无法确定枚举值范围，无法判断某个值是不是合法的枚举值

    ```c++
    Season s = static_cast<Season>(5); // 不会报错
    ```

3. 枚举值可以相同

    ```c++
    enum Test {
      Ele1 = 10,
      Ele2,
      Ele3 = 10
    };
    ```

4. 存在成员名称全局有效和可以隐式转换为整型的问题，不过c++可以通过enum class解决

    ```c++
    // 与传统枚举相比，成员访问需要通过ClassName::MemberName，增加了名字空间隔离性。也可以指定其类型了
    enum class Color : unsigned short {Red, Green, Blue};
    Color color = Color::Green;
    ```

## 宏

宏是预处理指令，静态检测无法生效，需要避免宏的滥用，常见问题

1. 宏定义类成员

    ```c++
    // 示例1
    // 这里屏蔽了内部实现，对阅读者非常不友好，且DEFAULT_MEM还是软约束，很容易出错
    #define DEFAULT_MEM     \
    public:                 \
    int GetX() {return x_;} \
    private:                \
    int x_;
    
    class Test {
    DEFAULT_MEM;
     public:
      void method();
    };
    
    // 示例2，这里不如直接用模版
    #define SINGLE_INST(class_name)                        \
     public:                                               \
      static class_name &GetInstance() {                   \
        static class_name instance;                        \
        return instance;                                   \
      }                                                    \
      class_name(const class_name&) = delete;              \
      class_name &operator =(const class_name &) = delete; \
     private:                                              \
      class_name();
    
    class Test {
      SINGLE_INST(Test)
    };
    ```

2. 用宏屏蔽参数

    ```c++
    // 直接忽略了dst_buf_size，并不合适
    #define strcpy_s(dst, dst_buf_size, src) strcpy(dst, src)
    ```

3. 拼接函数处理

    ```c++
    #define COPY_IF_EXSITS(dst, src, field) \
    do {                                    \
      if (src.has_##field()) {              \
        dst.set_##field(dst.field());       \
      }                                     \
    } while (false)
    
    void Demo() {
      Pb1 pb1;
      Pb2 pb2;
    
      COPY_IF_EXSITS(pb2, pb1, f1);	// 这里如果两者的f1类型不同，可能会有问题，比如一个是int64_t，
        							// 一个是int32_t，就会截断
      COPY_IF_EXSITS(pb2, pb1, f2);
    }
    ```

4. 改变语法风格

    ```c++
    // 不建议这样定义宏
    #define IF(con) if (con) {
    #define END_IF }
    #define ELIF(con) } else if (con) {
    #define ELSE } else {
    
    void Demo() {
      int a;
      IF(a > 0)
        Process1();
      ELIF(a < -3)
        Process2();
      ELSE
        Process3();
    }
    ```

## 共合体

共合体就是所有成员变量首地址相同，即成员变量多选一，可以节省空间，也可以实现同一数据不同解类型，只需要更换解指针类型即可

```c++
union Un {
    int m1;
    unsigned char m2;
};

void Demo() {
    Un un;
    un.m1 = 888;
    std::cout << un.m2 << std::endl;
    // 等价于
    int n1 = 888;
  	// 转换类型为unsigned char指针，再用*访问值
    std::cout << *reinterpret_cast<unsigned char *>(&n1) << std::endl;
}
```

多选一可以使用C++17的`std::variant`实现，共合体比较合适的用法时用两种方式访问同一份数据，比如下面：

```c++
// 下面是一个2字节的报文，一般情况下只需关注data的整体值，而需要排错时则需要关注具体某个小模块的值
// 这里Pack平时关注data就行，出错时可以通过part的结构体获取到每个模块的值排查
union Pack {
  uint16_t data; // 直接操作报文数据
  struct {
    unsigned version : 4;
    unsigned timeout : 2;
    unsigned retry_times : 1;
    unsigned block : 1;
    uint8_t bus_data;
  } part; // 操作报文内部数据
};

void Demo() {
  // 例如有一个从网络获取到的报文
  Pack pack;
  GetPackFromNetwork(pack);
  // 打印一下报文的值
  std::printf("%X", pack.data);
  // MARK！！ 更改一下业务数据
  pack.part.bus_data = 0xFF;
  // 把报文内容扔到处理流中
  DataFlow() << pack.data;
}
```

## const 引用

C/C++中，const并不是常量的意思！准确来说，const修饰的变量其实是只读变量。

C++引入const引用的概念，可能是只读变量的引用，也可能是只读变量本身：

```c++
const int a = 5; 	// a是一个只读变量

// 这里r1保存了a地址，可以访问到a
const int &r1 = a; 	// r1是a的引用，所以r1是引用
std::cout << r1;
// 等价于
const int *p1 = &a; // 引用初始化其实是指针的语法糖
std::cout << *p1; 	// 使用引用其实是解指针的语法糖

// 简单来说，const引用接收的是变量时，才是真正的引用，如果接收的是常量，由于常量没有内存地址，所以给const引用赋值时会重新定义一个变量来保存这个常量的值，此时const引用就是变量本身
const int &r2 = 8; 	// 8是一个常量，因此r2并不是引用，而是一个只读变量
// 等价于
const int c1 = 8; // c1其实就是个独立的变量，而并不是谁的引用
```

const引用所做的事就是让引用的对象只能做右值，即只读、不可变

## 右值引用与移动语义

右值引用是为了优化性能而不是可读性

1. 右值引用绑定常量，和const一样，由于常量没有内存地址，所以会新定义一个变量保存，右值引用相当于新定义了一个变量

    ```c++
    int &&r1 = 5; // 右值引用绑定常量，这里r1就是个普通变量，而不是引用
    // 等价于
    int v1 = 5;
    ```

2. 右值引用绑定变量：

    ```c++
    /* C++不允许右值引用绑定普通变量，当变量做右值时，变量只读，不会修改，如果是想变量被引用时就变成只读，用const引用就能实现
    */
    int a = 3;
    int &&r = a; // ERR
    
    // 右值引用真实的作用其实是延长临时变量的生命周期，以下面代码为例
    struct Test { // 随便写一个结构体，大家可以脑补这个里面有很多复杂的成员
      int a, b;
    };
    
    Test GetAnObj() { // 一个函数，返回一个结构体类型
      Test t {1, 2};  // 大家可以脑补这里面做了一些复杂的操作
      return t; // 首先开辟一片临时空间，把t复制过去，再把临时空间的地址写入寄存器
    }// 代码块结束，局部变量t被释放
    
    void Demo() {
      Test t1 = GetAnObj();// 读取寄存器中的地址，找到临时空间，再把临时空间的数据复制给t1
      // 函数调用结束，临时空间释放
    }
    
    // 注意看，GetAnObj中，t是局部变量，代码块结束后会被释放掉，整个过程发生了两次复制和两次释放
    // 简单来说就是，GetAnObj的返回值十分"短命"，复制给t1后就被释放了，而C++11引入右值引用，相当于给这个"将亡对象"续命了，使他等t1释放才释放，右值引用可以看作一个普通变量（底层还是指针实现的引用）
    
    Test &&t1 = GetAnObj(); // 引用GetAnObj返回值的临时空间，使其不要立刻释放
    ```

3. const引用绑定将亡对象也可以延长其生命周期，只不过相当于是快照，是不可变的

4. 



## 引用折叠

1. &是左值引用，&&是右值引用，两个引用遇到一起以左值引用优先

    ```c++
    template <typename T>
    void f(T &t) {
    }
    
    
    void Demo() {
      int a = 3;
    
      f<int>(a);		// T为int，函数为void f(int &t);
      f<int &>(a);		// T为int &，函数为void f(int &t);
      f<int &&>(a);		// T为int &&，函数为void f(int &t);
    }
    
    // 除非两个右值引用遇到一起会推导出右值引用，其他情况都是推导出左值引用
    & + & -> &
    & + && -> &
    && + & -> &
    && + && -> &&
    ```

2. auto &&也适用这个规律

    ```c++
    auto &&r1 = 5; // 绑定常量，推导出int &&
    int a;
    auto &&r2 = a; // 绑定变量，推导出int &
    int &&b = 1;
    auto &&r3 = b; // 右值引用一旦绑定，则相当于普通变量，所以绑定变量，推导出int &
    ```

3. auto &一定推导出左值引用，不能绑定常量或将亡对象

    ```c++
    auto &r1 = 5; // ERR，左值引用不能绑定常量
    auto &r2 = GetAnObj(); // ERR，左值引用不能绑定将亡对象
    int &&b = 1;
    auto &r3 = b; // OK，左值引用可以绑定右值引用（因为右值引用一旦绑定后，相当于左值）
    auto &r4 = r3; // OK，左值引用可以绑定左值引用（相当于绑定r4的引用源）
    ```

4. 



## auto推导策略

auto除了定义类型也承担定义动作的任务

1. 不能和[]组合定义数组

2. C++14前auto用于支持函数返回值后置语法，C++14后可以支持推导函数返回值类型

    ```c++
    // C++14前
    auto func() -> int; // () -> int表示定义函数，int表示函数返回值类型
    
    // C++14后，推导返回值，但只能是一种类型
    auto func(int cmd) {
      if (cmd > 0) {
        return 5; // 用5推导返回值为int
      }
      return std::string("123"); // ERR，返回值已经推导为int了，不能多类型返回
    }
    ```

3. 











