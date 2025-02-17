//
//  hot100_58.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/3.
//

#include "hot100_58.hpp"

void backtrace(vector<int>& candidates, int target, vector<int> cur, vector<vector<int>>& ret, int index) {
    if (0 == target) {
        ret.push_back(cur);
        return;
    }
    for (int i = index; i < candidates.size(); i ++) {
        if (candidates[i] <= target) {
            cur.push_back(candidates[i]);
            backtrace(candidates, target-candidates[i], cur, ret, i);
            cur.pop_back();
        }
    }
}

vector<vector<int>> hot100_58::combinationSum(vector<int>& candidates, int target)
{
    vector<vector<int>> ret;
    backtrace(candidates, target, {}, ret, 0);
    return ret;
}
