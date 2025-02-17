//
//  test1_20.cpp
//  LeetCode
//
//  Created by GenZhang on 2023/12/22.
//

#include "test1_20.hpp"
#include "hot100_1.hpp"
#include "hot100_2.hpp"
#include "hot100_3.hpp"
#include "hot100_4.hpp"
#include "hot100_5.hpp"
#include "hot100_6.hpp"
#include "hot100_7.hpp"
#include "hot100_8.hpp"
#include "hot100_9.hpp"
#include "hot100_10.hpp"
#include "hot100_11.hpp"
#include "hot100_12.hpp"
#include "hot100_13.hpp"
#include "hot100_14.hpp"
#include "hot100_15.hpp"
#include "hot100_16.hpp"
#include "hot100_17.hpp"
#include "hot100_18.hpp"
#include "hot100_19.hpp"
#include "hot100_20.hpp"

void test100_1()
{
    vector<int> vec = {3,2,4};
    int target = 6;
    hot100_1 obj = hot100_1();
    vector<int> out = obj.twoSum(vec, target);
    for (auto & i: out) {
        cout << i << ' ';
    }
}

void test100_2()
{
    hot100_2 obj = hot100_2();
    vector<string> input = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> output = obj.groupAnagrams(input);
    for (int i = 0; i < output.size(); i ++) {
        for (int j = 0; j < output[i].size(); j ++) {
            cout << output[i][j] << ' ';
        }
        cout << endl;
    }
}

void test100_3()
{
    hot100_3 obj = hot100_3();
    vector<int> input = {100,4,200,1,3,2};
    int output = obj.longestConsecutive(input);
    cout << output << endl;
}

void test100_4()
{
    hot100_4 obj = hot100_4();
    vector<int> input = {0,1,0,3,12};
    obj.moveZeroes(input);
    for (auto i: input) {
        cout << i << ' ';
    }
    cout << endl;
}

void test100_5()
{
    hot100_5 obj = hot100_5();
    vector<int> input = {1,8,6,2,5,4,8,3,7};
    int output = obj.maxArea(input);
    cout << output << endl;
}

void test100_6()
{
    hot100_6 obj = hot100_6();
//    vector<int> input = {-1,0,1,2,-1,-4};
    vector<int> input = {0,0,0,0};
    vector<vector<int>> output = obj.threeSum(input);
    for (int i = 0; i < output.size(); i ++) {
        for (int j = 0; j < output[i].size(); j ++) {
            cout << output[i][j] << ' ';
        }
        cout << endl;
    }
}

void test100_7()
{
    hot100_7 obj = hot100_7();
    vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int out = obj.trap(height);
    cout << out << endl;
}

void test100_8()
{
    hot100_8 obj = hot100_8();
    string input = "abcabcbb";
    int output = obj.lengthOfLongestSubstring(input);
    cout << output << endl;
}

void test100_9()
{
    hot100_9 obj = hot100_9();
    string str = "cbaebabacd", pat = "abc";
    vector<int> output = obj.findAnagrams(str, pat);
    for (int i: output) {
        cout << i << ' ';
    }
    cout << endl;
}

void test100_10()
{
    hot100_10 obj = hot100_10();
    vector<int> array = {1,2,3};
    int k = 3;
    int out = obj.subarraySum(array, k);
    cout << out << endl;
}

void test100_11()
{
    hot100_11 obj = hot100_11();
    vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;
    vector<int> out = obj.maxSlidingWindow(nums, k);
    for (int i : out) {
        cout << i << ',';
    }
    cout << endl;
}

void test100_12()
{
    hot100_12 obj = hot100_12();
    string s = "cabwefgewcwaefgcf";
    string t = "cae";
    string out = obj.minWindow(s, t);
    cout << out << endl;
}

void test100_13()
{
    hot100_13 obj = hot100_13();
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    int out = obj.maxSubArray(nums);
    cout << out << endl;
}

void test100_14()
{
    hot100_14 obj = hot100_14();
    vector<vector<int>> in = {{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>> out = obj.merge(in);
    for (auto vec : out) {
        cout << vec[0] << ", " << vec[1] << endl;
    }
}

void test100_15()
{
    hot100_15 obj = hot100_15();
    vector<int> nums = {1,2,3,4,5,6,7};
    int k = 3;
    obj.rotate(nums, k);
    for (auto i : nums) {
        cout << i << ' ';
    }
    cout << endl;
}

void test100_16()
{
    hot100_16 obj = hot100_16();
    vector<int> nums = {-1,1,0,-3,3};
    vector<int> out = obj.productExceptSelf(nums);
    for (auto i : out) {
        cout << i << ' ';
    }
    cout << endl;
}

void test100_17()
{
    hot100_17 obj = hot100_17();
    vector<int> nums = {3, 4, -1, 1};
    int out = obj.firstMissingPositive(nums);
    cout << out << endl;
}

void test100_18()
{
    hot100_18 obj = hot100_18();
    vector<vector<int>> matrix = {{1,1,1},{1,0,1},{1,1,1}};
    obj.setZeroes(matrix);
    for (int i = 0; i < matrix.size(); i ++) {
        for (int j = 0; j < matrix[i].size(); j ++) {
            cout << matrix[i][j] << ", ";
        }
        cout << endl;
    }
}

void test100_19()
{
    hot100_19 obj = hot100_19();
//    vector<vector<int>> matrix = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    vector<int> out = obj.spiralOrder(matrix);
    for (auto i : out) {
        cout << i << ", ";
    }
    cout << endl;
}

void test100_20()
{
    hot100_20 obj = hot100_20();
    vector<vector<int>> matrix = {{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};
    obj.rotate(matrix);
    for (int i = 0; i < matrix.size(); i ++) {
        for (int j = 0; j < matrix[0].size(); j ++) {
            cout << matrix[i][j] << ' ';
        }
        cout << endl;
    }
}
