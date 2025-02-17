//
//  test61_80.cpp
//  LeetCode
//
//  Created by GenZhang on 2023/12/22.
//

#include "test61_80.hpp"
#include "hot100_61.hpp"
#include "hot100_62.hpp"
#include "hot100_63.hpp"
#include "hot100_64.hpp"
#include "hot100_65.hpp"
#include "hot100_66.hpp"
#include "hot100_67.hpp"
#include "hot100_68.hpp"
#include "hot100_69.hpp"
#include "hot100_70.hpp"
#include "hot100_71.hpp"
#include "hot100_72.hpp"
#include "hot100_73.hpp"
#include "hot100_74.hpp"
#include "hot100_75.hpp"
#include "hot100_76.hpp"
#include "hot100_77.hpp"
#include "hot100_78.hpp"
#include "hot100_79.hpp"
#include "hot100_80.hpp"

void test100_61()
{
    string s = "aab";
    hot100_61 obj = hot100_61();
    vector<vector<string>> out = obj.partition(s);
    for (auto i : out) {
        for (auto j : i) {
            cout << j << ' ';
        }
        cout << endl;
    }
}
void test100_62()
{
    hot100_62 obj = hot100_62();
    vector<vector<string>> out = obj.solveNQueens(4);
    for (auto i : out) {
        for (auto j : i) {
            cout << j << endl;
        }
        cout << endl;
    }
    cout << endl;
}
void test100_63()
{
    vector<int> nums = {1,3,5,6,7};
    hot100_63 obj = hot100_63();
    int out = obj.searchInsert(nums, 7);
    cout << out << endl;
}
void test100_64()
{
    vector<vector<int>> mat = {{1, 3, 5, 7}, {10,11,16,20}, {23,30,34,60}};
    hot100_64 obj = hot100_64();
    bool out = obj.searchMatrix(mat, 11);
    cout << out << endl;
}
void test100_65()
{
    vector<int> nums = {5,7,7,7,8,8,10};
    hot100_65 obj = hot100_65();
    vector<int> out = obj.searchRange(nums, 7);
    cout << out[0] << ' ' << out[1] << endl;
}
void test100_66()
{
    vector<int> nums = {4,5,6,7,0,1,2};
    hot100_66 obj = hot100_66();
    int out = obj.search(nums, 7);
    cout << out << endl;
}
void test100_67()
{
    vector<int> nums = {4,5,6,7,1,2};
    hot100_67 obj = hot100_67();
    int out = obj.findMin(nums);
    cout << out << endl;
}
void test100_68()
{
    vector<int> nums1 = {1,3,5,6,9,11,13,14};
    vector<int> nums2 = {2,4,7,8,10,15};
    hot100_68 obj = hot100_68();
    double out = obj.findMedianSortedArrays(nums1, nums2);
    cout << out << endl;
}
void test100_69()
{
    string s = "[{[]()}]";
    hot100_69 obj = hot100_69();
    bool out = obj.isValid(s);
    cout << out << endl;
}
void test100_70()
{
    
}
void test100_71()
{
    string str = "3[a]2[bc]";
    hot100_71 obj = hot100_71();
    string s = obj.decodeString(str);
    cout << s << endl;
}
void test100_72()
{
    vector<int> temp = {73,74,75,71,69,72,76,73};
    hot100_72 obj = hot100_72();
    vector<int> out = obj.dailyTemperatures(temp);
    for (auto i : out) {
        cout << i << ' ';
    }
    cout << endl;
}
void test100_73()
{
    vector<int> height = {2,1,5,6,2,3};
    hot100_73 obj = hot100_73();
    int area = obj.largestRectangleArea(height);
    cout << area << endl;
}
void test100_74()
{
    vector<int> nums = {3,2,1,5,6,4};
    hot100_74 obj = hot100_74();
    int out = obj.findKthLargest(nums, 2);
    cout << out << endl;
}
void test100_75()
{
    vector<int> nums = {1,1,1,2,2,3};
    hot100_75 obj = hot100_75();
    vector<int> out = obj.topKFrequent(nums, 2);
    for (auto i : out) {
        cout << i << ' ';
    }
    cout << endl;
}
void test100_76()
{
    MedianFinder finder = MedianFinder();
    finder.addNum(-1);
    cout << finder.findMedian() << endl;
    finder.addNum(-2);
    cout << finder.findMedian() << endl;
    finder.addNum(-3);
    cout << finder.findMedian() << endl;
    finder.addNum(-4);
    cout << finder.findMedian() << endl;
    finder.addNum(-5);
    cout << finder.findMedian() << endl;
}
void test100_77()
{
    vector<int> prices = {7,1,5,3,6,4};
    hot100_77 obj = hot100_77();
    int out = obj.maxProfit(prices);
    cout << out << endl;
}
void test100_78()
{
    vector<int> nums = {2,3,1,1,4};
    hot100_79 obj = hot100_79();
    bool out = obj.jump(nums);
    cout << out << endl;
}
void test100_79()
{
    vector<int> nums = {2,3,1,1,4};
    hot100_79 obj = hot100_79();
    int out = obj.jump(nums);
    cout << out << endl;
}
void test100_80()
{
    string s = "ababcbacadefegdehijhklij";
    hot100_80 obj = hot100_80();
    vector<int> out = obj.partitionLabels(s);
    for (auto i : out) {
        cout << i << ' ';
    }
    cout << endl;
}
