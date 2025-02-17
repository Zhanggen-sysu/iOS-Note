//
//  hot100_3.cpp
//  LeetCode
//
//  Created by GenZhang on 2023/11/28.
//

#include "hot100_3.hpp"

// 贪心算法，找每个数的递增长度
int hot100_3::longestConsecutive(vector<int>& nums) {
    unordered_set<int> set;
    for (int i : nums) {
        set.insert(i);
    }
    int maxL = 0;
    // MARK: 注意这里要遍历set，不然会超时，不知道为啥
    for (int i : set) {
        if (!set.count(i-1)) {
            int cur = i;
            int len = 1;
            while (set.count(cur + 1)) {
                len += set.count(cur);
                cur += 1;
            }
            maxL = max(maxL, len);
        }
    }
    return maxL;
}
