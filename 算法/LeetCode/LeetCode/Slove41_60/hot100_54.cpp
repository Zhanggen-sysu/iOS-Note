//
//  hot100_54.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/3.
//

#include "hot100_54.hpp"

hot100_54 * hot100_54::findWord(string word) {
    hot100_54 *node = this;
    for (char c : word) {
        if (!node->children[c-'a']) {
            return nullptr;
        }
        node = node->children[c-'a'];
    }
    return node;
}

hot100_54::hot100_54()
{
    this->children = vector<hot100_54 *>(26);
    this->isEnd = false;
}

void hot100_54::insert(string word)
{
    hot100_54 *node = this;
    for (char c : word) {
        if (!node->children[c-'a']) {
            node->children[c-'a'] = new hot100_54();
        }
        node = node->children[c-'a'];
    }
    node->isEnd = true;
}

bool hot100_54::search(string word)
{
    hot100_54 *node = this->findWord(word);
    return node != nullptr && node->isEnd;
}

bool hot100_54::startsWith(string prefix)
{
    return this->findWord(prefix) != nullptr;
}
