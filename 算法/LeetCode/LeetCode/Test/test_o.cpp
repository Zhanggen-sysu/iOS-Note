//
//  test_o.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/23.
//

#include "test_o.hpp"

void test_o_1()
{
    string ipstr = "25525511135";
    other_1 obj = other_1();
    vector<string> out = obj.restoreIP(ipstr);
    for (auto i : out) {
        cout << i << ' ';
    }
    cout << endl;
}

void test_o_0()
{
    int arr[] = {1,2,3,4,5,6};
    // 这里&arr相当于指针的指针，可以想象成一个二维数组，&arr+1相当于加了一整个数组的大小，即指向数字6下一行数组，然后赋值给一维数组指针
    /*
     1 x x x
     2 x x x
     3 x x x
     ...
     */
    int *ptr = *(&arr + 1);
    // 2 6
    cout << *(arr + 1) << ' ' << *(ptr-1) << endl;
    // 6
    cout << sizeof(arr) / sizeof(arr[0]) << endl;
}

void test_o_2()
{
    string p = "abcde", str = "abcsdabcdehjabcde";
    other_2 obj = other_2();
    cout << obj.findFirstMatch(str, p) << endl;
}

void test_o_3()
{
    string s = "PAYPALISHIRING";
    int numRows = 3;
    other_3 obj = other_3();
    cout << obj.convert(s, numRows) << endl;
}

void test_o_4()
{
    string s = "   -42";
    other_4 obj = other_4();
    cout  << obj.myAtoi(s) << endl;
}

void test_o_5()
{
    int num = 58;
    string roman = "LVIII";
    other_5 obj = other_5();
    cout << obj.intToRoman(num) << endl;
    cout << obj.romanToInt(roman) << endl;
}
