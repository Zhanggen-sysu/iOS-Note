//
//  test41_60.cpp
//  LeetCode
//
//  Created by GenZhang on 2023/12/22.
//

#include "test41_60.hpp"
#include "hot100_41.hpp"
#include "hot100_42.hpp"
#include "hot100_43.hpp"
#include "hot100_44.hpp"
#include "hot100_45.hpp"
#include "hot100_46.hpp"
#include "hot100_47.hpp"
#include "hot100_48.hpp"
#include "hot100_49.hpp"
#include "hot100_50.hpp"
#include "hot100_51.hpp"
#include "hot100_52.hpp"
#include "hot100_53.hpp"
#include "hot100_54.hpp"
#include "hot100_55.hpp"
#include "hot100_56.hpp"
#include "hot100_57.hpp"
#include "hot100_58.hpp"
#include "hot100_59.hpp"
#include "hot100_60.hpp"

void test100_41()
{
    TreeNode *n1 = new TreeNode(15);
    TreeNode *n2 = new TreeNode(7);
    TreeNode *n3 = new TreeNode(9);
    TreeNode *n4 = new TreeNode(20, n1, n2);
    TreeNode *n5 = new TreeNode(3, n3, n4);
    
    hot100_41 obj = hot100_41();
    vector<vector<int>> out = obj.levelOrder(n5);
    
    for (auto i : out) {
        for (auto j : i) {
            cout << j << ' ';
        }
        cout << " | ";
    }
    cout << endl;
}
void test100_42()
{
    vector<int> in = {-10,-3,0,5,9};
    hot100_42 obj = hot100_42();
    hot100_41 obj41 = hot100_41();
    TreeNode *out = obj.sortedArrayToBST(in);
    vector<vector<int>> o = obj41.levelOrder(out);
    for (auto i : o) {
        for (auto j : i) {
            cout << j << ' ';
        }
        cout << " | ";
    }
    cout << endl;
}
void test100_43()
{
    TreeNode *n1 = new TreeNode(3);
    TreeNode *n2 = new TreeNode(6);
    TreeNode *n3 = new TreeNode(1);
    TreeNode *n4 = new TreeNode(4, n1, n2);
    TreeNode *n5 = new TreeNode(5, n3, n4);
    
    hot100_43 obj = hot100_43();
    bool out = obj.isValidBST(n5);
    cout << out << endl;
}
void test100_44()
{
    TreeNode *n1 = new TreeNode(0);
    TreeNode *n2 = new TreeNode(2);
    TreeNode *n3 = new TreeNode(1, n1, n2);
    TreeNode *n4 = new TreeNode(4);
    TreeNode *n5 = new TreeNode(3, n3, n4);
    
    hot100_44 obj = hot100_44();
    int out = obj.kthSmallest(n5, 4);
    
    cout << out << endl;
}
void test100_45()
{
    TreeNode *n1 = new TreeNode(5);
    TreeNode *n2 = new TreeNode(4);
    TreeNode *n3 = new TreeNode(2, nullptr, n1);
    TreeNode *n4 = new TreeNode(3, nullptr, n2);
    TreeNode *n5 = new TreeNode(1, n3, n4);
    
    hot100_45 obj = hot100_45();
    vector<int> out = obj.rightSideView(n5);
    
    for (auto i : out) {
        cout << i << ' ';
    }
    cout << endl;
}
void test100_46()
{
    TreeNode *n1 = new TreeNode(6);
    TreeNode *n2 = new TreeNode(3);
    TreeNode *n3 = new TreeNode(4);
    TreeNode *n4 = new TreeNode(2, n2, n3);
    TreeNode *n5 = new TreeNode(5, nullptr, n1);
    TreeNode *n6 = new TreeNode(1, n4, n5);
    
    hot100_46 obj = hot100_46();
    obj.flatten(n6);
    TreeNode *tmp = n6;
    while (tmp) {
        cout << tmp->val << ' ';
        tmp = tmp->right;
    }
    cout << endl;
}
void test100_47()
{
    vector<int> preorder = {1,2};//{3,9,20,15,7};
    vector<int> inorder = {1,2};//{9,3,15,20,7};
    hot100_47 obj = hot100_47();
    TreeNode *out = obj.buildTree(preorder, inorder);
    hot100_41 obj41 = hot100_41();
    vector<vector<int>> o = obj41.levelOrder(out);
    for (auto i : o) {
        for (auto j : i) {
            cout << j << ' ';
        }
        cout << " | ";
    }
    cout << endl;
}
void test100_48()
{
//            10
//           /  \
//          5    -3
//         / \     \
//        3   2     11
//       / \   \
//      3  -2   1
    
//    TreeNode *n1 = new TreeNode(3);
//    TreeNode *n2 = new TreeNode(-2);
//    TreeNode *n3 = new TreeNode(1);
//    
//    TreeNode *n4 = new TreeNode(3, n1, n2);
//    TreeNode *n5 = new TreeNode(2, nullptr, n3);
//    TreeNode *n6 = new TreeNode(11);
//    
//    TreeNode *n7 = new TreeNode(5, n4, n5);
//    TreeNode *n8 = new TreeNode(-3, nullptr, n6);
//    
//    TreeNode *n9 = new TreeNode(10, n7, n8);
    
    TreeNode *n1 = new TreeNode(4);
    TreeNode *n2 = new TreeNode(3, nullptr, n1);
    TreeNode *n3 = new TreeNode(2, nullptr, n2);
    TreeNode *n4 = new TreeNode(1, nullptr, n3);
    
    hot100_48 obj = hot100_48();
    int out = obj.pathSum(n4, 3);
    cout << out << endl;
}
void test100_49()
{
    
//            -10
//            /  \
//           9    6
//          /    / \
//         5    1   7
//        / \
//       3   2
    TreeNode *n1 = new TreeNode(3);
    TreeNode *n2 = new TreeNode(2);
    
    TreeNode *n3 = new TreeNode(5, n1, n2);
    TreeNode *n4 = new TreeNode(1);
    TreeNode *n5 = new TreeNode(7);
    
    TreeNode *n6 = new TreeNode(9, n3, nullptr);
    TreeNode *n7 = new TreeNode(6, n4, n5);
    
    TreeNode *n8 = new TreeNode(-10, n6, n7);
    hot100_49 obj = hot100_49();
    TreeNode *out = obj.lowestCommonAncestor(n8, n4, n6);
    cout << out->val << endl;
}
void test100_50()
{
    TreeNode *n1 = new TreeNode(3);
    TreeNode *n2 = new TreeNode(2);
    
    TreeNode *n3 = new TreeNode(5, n1, n2);
    TreeNode *n4 = new TreeNode(1);
    TreeNode *n5 = new TreeNode(7);
    
    TreeNode *n6 = new TreeNode(9, n3, nullptr);
    TreeNode *n7 = new TreeNode(6, n4, n5);
    
    TreeNode *n8 = new TreeNode(-10, n6, n7);
    
    hot100_50 obj = hot100_50();
    int out = obj.maxPathSum(n8);
    cout << out << endl;
}
void test100_51()
{
    vector<vector<char> > grid = {
        {'1','1','0','0','0'},
        {'1','1','0','0','0'},
        {'0','0','1','0','0'},
        {'0','0','0','1','1'}
    };
    hot100_51 obj = hot100_51();
    int out = obj.numIslands(grid);
    cout << out << endl;
}
void test100_52()
{
    vector<vector<int>> grid = {{2,1,1},
                                {0,1,1},
                                {1,1,1}};
    hot100_52 obj = hot100_52();
    int out = obj.orangesRotting(grid);
    cout << out << endl;
}
void test100_53()
{
    int numCourse = 4;
    vector<vector<int>> prerequisites = {{1,0},{0,1},{3,1},{3,2}};
    hot100_53 obj = hot100_53();
    bool out = obj.canFinish(numCourse, prerequisites);
    cout << out << endl;
}
void test100_54()
{
    
}
void test100_55()
{
    vector<int> nums = {1,2,3};
    hot100_55 obj = hot100_55();
    vector<vector<int>> out = obj.permute(nums);
    for (auto i : out) {
        for (auto j : i) {
            cout << j << ' ';
        }
        cout << endl;
    }
}
void test100_56()
{
    vector<int> nums = {1,2,3};
    hot100_56 obj = hot100_56();
    vector<vector<int>> out = obj.subsets(nums);
    for (auto i : out) {
        for (auto j : i) {
            cout << j << ' ';
        }
        cout << endl;
    }
}
void test100_57()
{
    string digits = "23";
    hot100_57 obj = hot100_57();
    vector<string> out = obj.letterCombinations(digits);
    for (auto i : out) {
        cout << i << endl;
    }
}
void test100_58()
{
    vector<int> candidate = {2,3,6,7};
    int target = 7;
    hot100_58 obj = hot100_58();
    vector<vector<int>> out = obj.combinationSum(candidate, target);
    for (auto i : out) {
        for (auto j : i) {
            cout << j << ' ';
        }
        cout << endl;
    }
}
void test100_59()
{
    int in = 3;
    hot100_59 obj = hot100_59();
    vector<string> out = obj.generateParenthesis(in);
    for (auto i : out) {
        cout << i << endl;
    }
}
void test100_60()
{
    vector<vector<char>> board = {{'A','B','C','E'},{'S','F','C','S'},{'A','D','E','E'}};
    string word = "SEE";
    hot100_60 obj = hot100_60();
    bool out = obj.exist(board, word);
    cout << out << endl;
}
