//
//  hot100_14.hpp
//  LeetCode
//
//  Created by GenZhang on 2023/12/21.
//

#ifndef hot100_14_hpp
#define hot100_14_hpp

#include <vector>
using namespace std;

class hot100_14 {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals);
};

/**
 以数组 intervals 表示若干个区间的集合，其中单个区间为 intervals[i] = [starti, endi] 。请你合并所有重叠的区间，并返回 一个不重叠的区间数组，该数组需恰好覆盖输入中的所有区间 。
 
 输入：intervals = [[1,3],[2,6],[8,10],[15,18]]
 输出：[[1,6],[8,10],[15,18]]
 解释：区间 [1,3] 和 [2,6] 重叠, 将它们合并为 [1,6].
 */

#endif /* hot100_14_hpp */
