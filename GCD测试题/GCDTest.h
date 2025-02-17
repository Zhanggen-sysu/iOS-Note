//
//  GCDTest.h
//  LearnTest
//
//  Created by GenZhang on 2023/11/30.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface GCDTest : NSObject

+ (void)test1;  // 1,5,2,4,3
+ (void)test2;  // 1,5,2,3,4
+ (void)test3;  // 1,5,2,4,3
+ (void)test4;  // dead lock
+ (void)test5;  // deal lock
+ (void)test6;  // 1,3,2
+ (void)test7;  // 0 在 3 后面，7 8 9在0后面，1230789，3120789，3012879都可能
+ (void)test8;  // 1,2,3,0,7,8,9
+ (void)test9;  // a >= 100
+ (void)test10; // 1,3，子线程runloop不开启，所以不会执行
+ (void)test11; // 1,3,2  3在前面是因为test0在runloop唤醒时执行，子线程一样注意这个问题，调用runloop的run时就会执行
+ (void)test12; // 1,2,3 performSelector:withObject:相当于msgSend
+ (void)test13; // thread执行完会立刻销毁，所以crash
/**
 2023-11-30 11:59:59.173479+0800 LearnTest[98848:6180220] <_NSMainThread: 0x60000159c600>{number = 1, name = main} 执行任务结束
 2023-11-30 11:59:59.173553+0800 LearnTest[98848:6180496] <NSThread: 0x600001594dc0>{number = 6, name = (null)} 执行任务一次  i = 1
 2023-11-30 11:59:59.173553+0800 LearnTest[98848:6180505] <NSThread: 0x6000015c5a40>{number = 4, name = (null)} 执行任务一次  i = 0
 2023-11-30 11:59:59.173704+0800 LearnTest[98848:6180505] <NSThread: 0x6000015c5a40>{number = 4, name = (null)} 执行任务一次  i = 2
 2023-11-30 11:59:59.173707+0800 LearnTest[98848:6180496] <NSThread: 0x600001594dc0>{number = 6, name = (null)} 执行任务一次  i = 3
 2023-11-30 11:59:59.173842+0800 LearnTest[98848:6180496] <NSThread: 0x600001594dc0>{number = 6, name = (null)} 执行任务一次  i = 4
 2023-11-30 11:59:59.173852+0800 LearnTest[98848:6180505] <NSThread: 0x6000015c5a40>{number = 4, name = (null)} 执行任务一次  i = 5
 2023-11-30 11:59:59.174083+0800 LearnTest[98848:6180496] <NSThread: 0x600001594dc0>{number = 6, name = (null)} 执行任务一次  i = 6
 2023-11-30 11:59:59.174208+0800 LearnTest[98848:6180505] <NSThread: 0x6000015c5a40>{number = 4, name = (null)} 执行任务一次  i = 7
 2023-11-30 11:59:59.174308+0800 LearnTest[98848:6180496] <NSThread: 0x600001594dc0>{number = 6, name = (null)} 执行任务一次  i = 8
 2023-11-30 11:59:59.174420+0800 LearnTest[98848:6180505] <NSThread: 0x6000015c5a40>{number = 4, name = (null)} 执行任务一次  i = 9
 */
+ (void)test14; // 限制执行的线程数量
/**
 2023-11-30 14:01:37.573491+0800 LearnTest[98848:6238636] <NSThread: 0x60000159cf40>{number = 17, name = (null)} 执行任务一次
 2023-11-30 14:01:37.573552+0800 LearnTest[98848:6238862] <NSThread: 0x6000015c4180>{number = 22, name = (null)} 执行任务一次
 2023-11-30 14:01:37.573635+0800 LearnTest[98848:6238871] <NSThread: 0x6000015c4800>{number = 24, name = (null)} 执行任务一次
 2023-11-30 14:01:37.573635+0800 LearnTest[98848:6238870] <NSThread: 0x600001595040>{number = 23, name = (null)} 执行任务一次
 2023-11-30 14:01:37.573638+0800 LearnTest[98848:6238636] <NSThread: 0x60000159cf40>{number = 17, name = (null)} 执行任务一次
 2023-11-30 14:01:37.573693+0800 LearnTest[98848:6238872] <NSThread: 0x6000015c7b00>{number = 25, name = (null)} 执行任务一次
 2023-11-30 14:01:37.573727+0800 LearnTest[98848:6238862] <NSThread: 0x6000015c4180>{number = 22, name = (null)} 执行任务一次
 2023-11-30 14:01:37.573734+0800 LearnTest[98848:6238873] <NSThread: 0x6000015f8600>{number = 26, name = (null)} 执行任务一次
 2023-11-30 14:01:37.573808+0800 LearnTest[98848:6238874] <NSThread: 0x600001596180>{number = 27, name = (null)} 执行任务一次
 2023-11-30 14:01:37.574097+0800 LearnTest[98848:6238871] <NSThread: 0x6000015c4800>{number = 24, name = (null)} 执行任务一次
 2023-11-30 14:01:37.575297+0800 LearnTest[98848:6180220] <_NSMainThread: 0x60000159c600>{number = 1, name = main} 执行任务结束
 */
+ (void)test15; // gcd group
/**
 2023-11-30 14:05:41.502373+0800 LearnTest[98848:6238872] <NSThread: 0x6000015c7b00>{number = 25, name = (null)} 执行任务一次
 2023-11-30 14:05:41.502453+0800 LearnTest[98848:6238875] <NSThread: 0x6000015964c0>{number = 28, name = (null)} 执行任务一次
 2023-11-30 14:05:41.502567+0800 LearnTest[98848:6238872] <NSThread: 0x6000015c7b00>{number = 25, name = (null)} 执行任务一次
 2023-11-30 14:05:41.502613+0800 LearnTest[98848:6238875] <NSThread: 0x6000015964c0>{number = 28, name = (null)} 执行任务一次
 2023-11-30 14:05:41.502711+0800 LearnTest[98848:6238872] <NSThread: 0x6000015c7b00>{number = 25, name = (null)} 执行任务一次
 2023-11-30 14:05:41.502735+0800 LearnTest[98848:6238875] <NSThread: 0x6000015964c0>{number = 28, name = (null)} 执行任务一次
 2023-11-30 14:05:41.502913+0800 LearnTest[98848:6238872] <NSThread: 0x6000015c7b00>{number = 25, name = (null)} 执行任务一次
 2023-11-30 14:05:41.503157+0800 LearnTest[98848:6238875] <NSThread: 0x6000015964c0>{number = 28, name = (null)} 执行任务一次
 2023-11-30 14:05:41.503349+0800 LearnTest[98848:6238872] <NSThread: 0x6000015c7b00>{number = 25, name = (null)} 执行任务一次
 2023-11-30 14:05:41.503527+0800 LearnTest[98848:6238875] <NSThread: 0x6000015964c0>{number = 28, name = (null)} 执行任务一次
 2023-11-30 14:05:41.503945+0800 LearnTest[98848:6180220] <_NSMainThread: 0x60000159c600>{number = 1, name = main} 执行任务结束
 */
+ (void)test16; // gcd + 限制线程数

+ (void)test17; // A B C D

+ (void)test18; // D A deadlock

- (void)test19; // 可能发生碰撞，会crash，多次释放旧值

- (void)test20; // TagPointer 不会crash

+ (void)test21; // 优先看会不会死锁啊！！

+ (void)test22; // 注意run的位置performSelector afterdelay在子线程会阻塞

+ (void)test23;

+ (void)test24; // 2 3 6 8 1 4 9 5(在3后就行？) aaa

@end

NS_ASSUME_NONNULL_END
