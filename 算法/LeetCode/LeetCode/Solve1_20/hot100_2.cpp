//
//  hot100_2.cpp
//  LeetCode
//
//  Created by GenZhang on 2023/11/28.
//

#include "hot100_2.hpp"

// Hash
vector<vector<string>> hot100_2::groupAnagrams(vector<string>& strs) {
    vector<vector<string>> ret;
    unordered_map<string, int> mmap;
    for (auto str : strs) {
        string key = str;
        sort(key.begin(), key.end());
        if (mmap[key]) {
            ret[mmap[key]-1].push_back(str);
        } else {
            mmap[key] = ret.size() + 1;
            ret.push_back({str});
        }
    }
    return ret;
}
