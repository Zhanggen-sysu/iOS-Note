//
//  hot100_6.cpp
//  LeetCode
//
//  Created by GenZhang on 2023/11/28.
//

#include "hot100_6.hpp"

// 先排序，再固定一个数，左右指针找另外两个数，注意去重
vector<vector<int>> hot100_6::threeSum(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> ret;
    for (int i = 0; i < nums.size();) {
        int target = -nums[i];
        int l = i + 1, r = nums.size() - 1;
        while (l < r) {
            int sum = nums[l] + nums[r];
            if (sum < target) {
                l ++;
            } else if (sum > target){
                r --;
            } else {
                ret.push_back({nums[i], nums[l], nums[r]});
                do {
                    l ++;
                } while (l < r && nums[l] == nums[l-1]);
                do {
                    r --;
                } while (l < r && nums[r] == nums[r+1]);
            }
        }
        do {
            i ++;
        } while (i < nums.size() && nums[i] == nums[i - 1]);
    }
    return ret;
}
