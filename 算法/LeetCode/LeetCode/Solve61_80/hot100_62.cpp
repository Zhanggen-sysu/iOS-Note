//
//  hot100_62.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/9.
//

#include "hot100_62.hpp"

bool canPutQ(vector<string> mat, int i, int j) {
    for (int k = 0; k < mat.size(); k ++) {
        if (mat[i][k] == 'Q' || mat[k][j] == 'Q') {
            return false;
        }
    }
    int r = i-1, c = j-1;
    while (r >= 0 && c >= 0) {
        if (mat[r][c] == 'Q') {
            return false;
        }
        r--;c--;
    }
    r = i+1; c = j+1;
    while (r < mat.size() && c < mat.size()) {
        if (mat[r][c] == 'Q') {
            return false;
        }
        r++;c++;
    }
    r = i-1; c = j+1;
    while (r >= 0 && c < mat.size()) {
        if (mat[r][c] == 'Q') {
            return false;
        }
        r--;c++;
    }
    r = i+1; c = j-1;
    while (c >= 0 && r < mat.size()) {
        if (mat[r][c] == 'Q') {
            return false;
        }
        r++;c--;
    }
    
    return true;
}


void backtrace(vector<vector<string>>& ret, vector<string> mat, int row) {
    if (row >= mat.size()) {
        ret.push_back(mat);
        return;
    }
    for (int i = 0; i < mat.size(); i ++) {
        if (canPutQ(mat, row, i)) {
            mat[row][i] = 'Q';
            backtrace(ret, mat, row+1);
            mat[row][i] = '.';
        }
    }
}

vector<vector<string>> hot100_62::solveNQueens(int n)
{
    string s = "";
    for (int i = 0; i < n; i ++) {
        s += '.';
    }
    vector<string> mat = vector<string>(n, s);
    vector<vector<string>> ret;
    backtrace(ret, mat, 0);
    return ret;
}
