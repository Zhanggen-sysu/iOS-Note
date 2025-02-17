//
//  hot100_54.hpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/3.
//

#ifndef hot100_54_hpp
#define hot100_54_hpp

#include <string>
#include <vector>
using namespace std;

class hot100_54 {
private:
    vector<hot100_54 *> children;
    bool isEnd;
public:
    hot100_54();
    hot100_54 * findWord(string word);
    
    void insert(string word);
    
    bool search(string word);
    
    bool startsWith(string prefix);
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */

/**
 208. 实现 Trie (前缀树)
 
 Trie（发音类似 "try"）或者说 前缀树 是一种树形数据结构，用于高效地存储和检索字符串数据集中的键。这一数据结构有相当多的应用情景，例如自动补完和拼写检查。

 请你实现 Trie 类：

 Trie() 初始化前缀树对象。
 void insert(String word) 向前缀树中插入字符串 word 。
 boolean search(String word) 如果字符串 word 在前缀树中，返回 true（即，在检索之前已经插入）；否则，返回 false 。
 boolean startsWith(String prefix) 如果之前已经插入的字符串 word 的前缀之一为 prefix ，返回 true ；否则，返回 false 。
 
 输入
 ["Trie", "insert", "search", "search", "startsWith", "insert", "search"]
 [[], ["apple"], ["apple"], ["app"], ["app"], ["app"], ["app"]]
 输出
 [null, null, true, false, true, null, true]

 解释
 Trie trie = new Trie();
 trie.insert("apple");
 trie.search("apple");   // 返回 True
 trie.search("app");     // 返回 False
 trie.startsWith("app"); // 返回 True
 trie.insert("app");
 trie.search("app");     // 返回 True
 
 */

#endif /* hot100_54_hpp */
