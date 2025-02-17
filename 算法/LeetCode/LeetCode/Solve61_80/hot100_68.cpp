//
//  hot100_68.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/9.
//

#include "hot100_68.hpp"
// MARK: 111
// 找第K个数
int findK(vector<int>& nums1, vector<int>& nums2, int i, int j, int k) {
    if (i >= nums1.size()) {
        return nums2[j + k - 1];
    }
    if (j >= nums2.size()) {
        return nums1[i + k - 1];
    }
    if (k == 1) {
        return min(nums1[i], nums2[j]);
    }
    int mid1 = (i + k / 2 - 1) >= nums1.size() ? INT_MAX : nums1[i+k/2-1];
    int mid2 = (j + k / 2 - 1) >= nums2.size() ? INT_MAX : nums2[j+k/2-1];
    if (mid1 < mid2) {
        // 每一轮排除k/2个元素
        return findK(nums1, nums2, i + k / 2, j, k - k/2);
    }
    return findK(nums1, nums2, i, j + k / 2, k - k/2);;
}

double hot100_68::findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
{
    int cnt = nums1.size() + nums2.size();
    if (cnt % 2) {
        return findK(nums1, nums2, 0, 0, cnt / 2 + 1);
    }
    return (findK(nums1, nums2, 0, 0, cnt / 2) + findK(nums1, nums2, 0, 0, cnt / 2 + 1)) / 2.0;
}
