//
//  hot100_86.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/9.
//

#include "hot100_86.hpp"

bool hot100_86::wordBreak(string s, vector<string>& wordDict)
{
    unordered_set<string> wordSet;
    for (auto i : wordDict) {
        wordSet.insert(i);
    }
    vector<bool> dp(s.length() + 1, false);
    dp[0] = true;
    for (int i = 1; i <= s.length(); i ++) {
        for (int j = 0; j < i; j ++) {
            if (dp[j] && wordSet.find(s.substr(j, i - j)) != wordSet.end()) {
                dp[i] = true;
                break;
            }
        }
    }
    return dp[s.length()];
    
}

//bool backtrace(string s, string cur, vector<string>& wordDict)
//{
//    if (cur.length() == s.length() && cur.compare(s) == 0) {
//        return true;
//    }
//    for (int i = 0; i < wordDict.size(); i ++) {
//        if (wordDict[i].length() + cur.length() <= s.length()) {
//            if (backtrace(s, cur + wordDict[i], wordDict)) {
//                return true;
//            }
//        }
//    }
//    return false;
//}
//// 回溯法
//bool hot100_86::wordBreak(string s, vector<string>& wordDict)
//{
//    return backtrace(s, "", wordDict);
//}
