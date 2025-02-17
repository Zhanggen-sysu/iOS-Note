//
//  other_3.hpp
//  LeetCode
//
//  Created by GenZhang on 2024/3/22.
//

#ifndef other_3_hpp
#define other_3_hpp

#include <string>
#include <vector>
using namespace std;
class other_3 {
public:
    string convert(string s, int numRows);
};

/**
 将一个给定字符串 s 根据给定的行数 numRows ，以从上往下、从左到右进行 Z 字形排列。

 比如输入字符串为 "PAYPALISHIRING" 行数为 3 时，排列如下：

 P   A   H   N      P           I
 A P L S I I G      A       L       S
 Y   I   R          Y   A               H
                    P                       I
 之后，你的输出需要从左往右逐行读取，产生出一个新的字符串，比如："PAHNAPLSIIGYIR"。
 */

#endif /* other_3_hpp */
