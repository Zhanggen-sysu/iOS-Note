//
//  main.cpp
//  LeetCode
//
//  Created by GenZhang on 2023/11/28.
//

#include <iostream>
#include "test1_20.hpp"
#include "test21_40.hpp"
#include "test41_60.hpp"
#include "test61_80.hpp"
#include "test81_100.hpp"
#include "test_o.hpp"

using namespace std;

struct S1 {
  short a, b;
};

struct S2 {
  int a;
};

int main(int argc, const char * argv[]) {
    S2 s2;
    S1 *p = reinterpret_cast<S1 *>(&s2);
    p->a = 2;
    p->b = 1;

    std::cout << s2.a; // 猜猜这里会输出多少？
//    test100_1();
//    test100_2();
//    test100_3();
//    test100_4();
//    test100_5();
//    test100_6();
//    test100_7();
//    test100_8();
//    test100_9();
//    test100_10();
//    test100_11();
//    test100_12();
//    test100_13();
//    test100_14();
//    test100_15();
//    test100_16();
//    test100_17();
//    test100_18();
//    test100_19();
//    test100_20();
//    test100_21();
//    test100_22();
//    test100_23();
//    test100_24();
//    test100_25();
//    test100_26();
//    test100_27();
//    test100_28();
//    test100_29();
//    test100_30();
//    test100_31();
//    test100_32();
//    test100_33();
//    test100_34();
//    test100_35();
//    test100_36();
//    test100_37();
//    test100_38();
//    test100_39();
//    test100_40();
//    test100_41();
//    test100_42();
//    test100_43();
//    test100_44();
//    test100_45();
//    test100_46();
//    test100_47();
//    test100_48();
//    test100_49();
//    test100_50();
//    test100_51();
//    test100_52();
//    test100_53();
//    test100_54();
//    test100_55();
//    test100_56();
//    test100_57();
//    test100_58();
//    test100_59();
//    test100_60();
//    test100_61();
//    test100_62();
//    test100_63();
//    test100_64();
//    test100_65();
//    test100_66();
//    test100_67();
//    test100_68();
//    test100_69();
//    test100_70();
//    test100_71();
//    test100_72();
//    test100_73();
//    test100_74();
//    test100_75();
//    test100_76();
//    test100_77();
//    test100_78();
//    test100_79();
//    test100_80();
//    test100_81();
//    test100_82();
//    test100_83();
//    test100_84();
//    test100_85();
//    test100_86();
//    test100_87();
//    test100_88();
//    test100_89();
//    test100_90();
//    test100_91();
//    test100_92();
//    test100_93();
//    test100_94();
//    test100_95();
//    test100_96();
//    test100_97();
//    test100_98();
//    test100_99();
//    test100_100();
//    test_o_1();
//    test_o_0();
//    test_o_2();
//    test_o_3();
//    test_o_4();
//    test_o_5();
    return 0;
}
