//
//  other_5.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/3/22.
//

#include "other_5.hpp"

bool other_5::backtrace(int num, string& current) {
    if (num == 0) return true;
    for (int i = 0; i < keyArray.size(); i ++) {
        if (num >= keyArray[i]) {
            current += mMap[keyArray[i]];
            if (backtrace(num - keyArray[i], current)) {
                return true;
            }
        }
    }
    return false;
}

string other_5::intToRoman(int num)
{
    if (num <= 0) return "";
    mMap = {
        {1,"I"}, {5,"V"}, {10,"X"}, {50,"L"},
        {100,"C"}, {500,"D"}, {1000,"M"},
        {4,"IV"}, {9,"IX"}, {40,"XL"}, {90,"XC"},
        {400,"CD"}, {900,"CM"},
    };
    keyArray = {
        1000,900,500,400,100,90,50,40,10,9,5,4,1
    };
    string cur = "";
    backtrace(num, cur);
    return cur;
}

int other_5::romanToInt(string roman)
{
    int i = 0;
    int ret = 0;
    unordered_map<string, int> mp = {
        {"I",1}, {"V",5}, {"X",10}, {"L",50},
        {"C",100}, {"D",500}, {"M",1000},
        {"IV",4}, {"IX",9}, {"XL",40}, {"XC",90},
        {"CD",400}, {"CM",900},
    };
    while (i < roman.length()) {
        if (i + 1 < roman.length()) {
            string key = roman.substr(i, 2);
            if (mp[key] != 0) {
                ret += mp[key];
                i += 2;
            } else {
                string aKey = roman.substr(i, 1);
                ret += mp[aKey];
                i ++;
            }
        } else {
            string aKey = roman.substr(i, 1);
            ret += mp[aKey];
            i ++;
        }
    }
    return ret;
}
