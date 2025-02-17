//
//  hot100_10.cpp
//  LeetCode
//
//  Created by GenZhang on 2023/11/29.
//

#include "hot100_10.hpp"

// Hash
int hot100_10::subarraySum(vector<int>& nums, int k) {
    unordered_map<int, int> sumMap;
    int sum = 0, cnt = 0;
    for (int num: nums)
    {
        sum += num;
        if (sumMap[sum-k]) {
            cnt += sumMap[sum-k];
        }
        sumMap[sum] ++;
    }
    cnt += sumMap[k];
    return cnt;
}
