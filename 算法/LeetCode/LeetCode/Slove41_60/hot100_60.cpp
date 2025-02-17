//
//  hot100_60.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/3.
//

#include "hot100_60.hpp"

bool hot100_60::backtrace(vector<vector<char>>& board, string word, int index, int i, int j)
{
     if (index >= word.length()) {
         return true;
     }
     if (i < 0 || i >= board.size() || j < 0 || j >= board[0].size()) {
         return false;
     }
     if (visit[i][j]) {
         return false;
     }
     if (board[i][j] != word[index]) {
         return false;
     }
     
     visit[i][j] = true;
     if (backtrace(board, word, index+1, i-1, j)) {
         return true;
     }
     if (backtrace(board, word, index+1, i+1, j)) {
         return true;
     }
     if (backtrace(board, word, index+1, i, j-1)) {
         return true;
     }
     if (backtrace(board, word, index+1, i, j+1)) {
         return true;
     }
     visit[i][j] = false;
     return false;
}
bool hot100_60::exist(vector<vector<char>>& board, string word)
{
     visit = vector<vector<bool> >(board.size(), vector<bool>(board[0].size(), false));
     for (int i = 0; i < board.size(); i ++) {
         for (int j = 0; j < board[0].size(); j ++) {
             if (backtrace(board, word, 0, i, j)) {
                 return true;
             }
         }
     }
     return false;
}
