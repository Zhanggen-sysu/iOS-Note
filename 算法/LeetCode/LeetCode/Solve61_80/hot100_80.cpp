//
//  hot100_80.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/9.
//

#include "hot100_80.hpp"

vector<int> hot100_80::partitionLabels(string s)
{
    unordered_map<char, int> endMap;
    for (int i = 0; i < s.length(); i ++) {
        endMap[s[i]] = i;
    }
    int start = 0, end = 0;
    vector<int> ret;
    for (int i = 0; i < s.length(); i ++) {
        end = max(endMap[s[i]], end);
        if (i == end) {
            ret.push_back(end - start + 1);
            start = end + 1;
        }
    }
    return ret;
}

//bool comp(vector<int> v1, vector<int> v2) {
//    return v1[0] < v2[0];
//}
//
//vector<int> hot100_80::partitionLabels(string s)
//{
//    unordered_map<char, vector<int>> mMap;
//    int len = s.length();
//    for (int i = 0; i < len; i ++) {
//        if (mMap.contains(s[i])) {
//            if (i > mMap[s[i]][1]) {
//                mMap[s[i]][1] = i;
//            }
//        } else {
//            mMap[s[i]] = {i, i};
//        }
//    }
//    vector<vector<int>> temp;
//    for (auto pair : mMap) {
//        temp.push_back(pair.second);
//    }
//    sort(temp.begin(), temp.end(), comp);
//    vector<int> ret;
//    int start = temp[0][0];
//    int end = temp[0][1];
//    for (int i = 1; i < temp.size(); i ++) {
//        if (temp[i][0] < end) {
//            end = max(temp[i][1], end);
//        } else {
//            ret.push_back(end - start + 1);
//            start = temp[i][0];
//            end = temp[i][1];
//        }
//    }
//    ret.push_back(end-start+1);
//    return ret;
//}
