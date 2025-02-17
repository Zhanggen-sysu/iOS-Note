//
//  test81_100.cpp
//  LeetCode
//
//  Created by GenZhang on 2023/12/22.
//

#include "test81_100.hpp"
#include <vector>
#include "hot100_81.hpp"
#include "hot100_82.hpp"
#include "hot100_83.hpp"
#include "hot100_84.hpp"
#include "hot100_85.hpp"
#include "hot100_86.hpp"
#include "hot100_87.hpp"
#include "hot100_88.hpp"
#include "hot100_89.hpp"
#include "hot100_90.hpp"
#include "hot100_91.hpp"
#include "hot100_92.hpp"
#include "hot100_93.hpp"
#include "hot100_94.hpp"
#include "hot100_95.hpp"
#include "hot100_96.hpp"
#include "hot100_97.hpp"
#include "hot100_98.hpp"
#include "hot100_99.hpp"
#include "hot100_100.hpp"
using namespace std;

void test100_81()
{
    int stair = 5;
    hot100_81 obj = hot100_81();
    int out = obj.climbStairs(stair);
    cout << out << endl;
}
void test100_82()
{
    int row = 5;
    hot100_82 obj = hot100_82();
    vector<vector<int>> out = obj.generate(row);
    for (auto i : out) {
        for (auto j : i) {
            cout << j << ' ';
        }
        cout << endl;
    }
}
void test100_83()
{
    vector<int> nums = {1,2,3,1};
    hot100_83 obj = hot100_83();
    int out = obj.rob(nums);
    cout << out << endl;
}
void test100_84()
{
    int n = 12;
    hot100_84 obj = hot100_84();
    int out = obj.numSquares(n);
    cout << out << endl;
}
void test100_85()
{
    vector<int> coins = {1, 2, 5};
    int amount = 11;
    hot100_85 obj = hot100_85();
    int out = obj.coinChange(coins, amount);
    cout << out << endl;
}
void test100_86()
{
    vector<string> dict = {"a","b","bbb","bbbb"};
    string s = "bb";
    hot100_86 obj = hot100_86();
    bool out = obj.wordBreak(s, dict);
    cout << out << endl;
}
void test100_87()
{
    vector<int> nums = {1,3,6,7,9,4,10,5,6};
    hot100_87 obj = hot100_87();
    int out = obj.lengthOfLIS(nums);
    cout << out << endl;
}
void test100_88()
{
    vector<int> nums = {2,3,-2,4};
    hot100_88 obj = hot100_88();
    int out = obj.maxProduct(nums);
    cout << out << endl;
}
void test100_89()
{
    vector<int> in = {1,5,5,11};
    hot100_89 obj = hot100_89();
    bool out = obj.canPartition(in);
    cout << out << endl;
}
void test100_90()
{
    string s = "(((())())";
    hot100_90 obj = hot100_90();
    int out = obj.longestValidParentheses(s);
    cout << out << endl;
}
void test100_91()
{
    hot100_91 obj = hot100_91();
    int out = obj.uniquePaths(3, 7);
    cout << out << endl;
}
void test100_92()
{
    vector<vector<int>> grid = {{1,3,1},{1,5,1},{4,2,1}};
    hot100_92 obj = hot100_92();
    int out = obj.minPathSum(grid);
    cout << out << endl;
}
void test100_93()
{
    string s = "babad";
    hot100_93 obj = hot100_93();
    string out = obj.longestPalindrome(s);
    cout << out << endl;
}
void test100_94()
{
    string str1 = "abcde", str2 = "ace";
    hot100_94 obj = hot100_94();
    int out = obj.longestCommonSubsequence(str1, str2);
    cout << out << endl;
}
void test100_95()
{
    string s1 = "horse", s2 = "ros";
    hot100_95 obj = hot100_95();
    int out = obj.minDistance(s1, s2);
    cout << out << endl;
}
void test100_96()
{
    vector<int> nums = {2,2,3,1,3,6,6,8,7,7,8};
    hot100_96 obj = hot100_96();
    int out = obj.singleNumber(nums);
    cout << out << endl;
}
void test100_97()
{
    vector<int> nums = {1,2,5,4,1,2,3,1,1,1,1,1,};
    hot100_97 obj = hot100_97();
    int out = obj.majorityElement(nums);
    cout << out << endl;
}
void test100_98()
{
    vector<int> nums = {2,2,1,2,1,1,1,0,0,2,1,0,2,1,2,2,1,1,1,1,1,0,2,0,2,0,2,2,1,0,2,1,0,2,1,2,0,0,0,0,2,1,1,2,0,1,2,2,0,0,2,2,0,1,0,1,0,0,1,1,1,0,0,2,2,2,1,0,0,2,1,0,1,0,2,2,1,2,1,1,2,1,1,0,0,2,1,0,0};
    hot100_98 obj = hot100_98();
    obj.sortColors(nums);
    for (auto i : nums) {
        cout << i << ' ';
    }
    cout << endl;
}
void test100_99()
{
    vector<int> nums = {5,4,7,5,3,2};
    hot100_99 obj = hot100_99();
    obj.nextPermutation(nums);
    for (auto i : nums) {
        cout << i << ' ';
    }
    cout << endl;
}
void test100_100()
{
    vector<int> nums = {1,3,4,2,2};
    hot100_100 obj = hot100_100();
    int out = obj.findDuplicate(nums);
    cout << out << endl;
}
