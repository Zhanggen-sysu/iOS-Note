//
//  hot100_82.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/9.
//

#include "hot100_82.hpp"

vector<vector<int>> hot100_82::generate(int numRows)
{
    vector<vector<int>> ret;
    for (int i = 0; i < numRows; i ++) {
        vector<int> vec(i+1, 1);
        ret.push_back(vec);
        for (int j = 1; j < i; j ++) {
            ret[i][j] = ret[i-1][j-1] + ret[i-1][j];
        }
    }
    return ret;
}
