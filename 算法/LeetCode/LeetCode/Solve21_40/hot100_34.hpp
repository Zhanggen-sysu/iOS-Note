//
//  hot100_34.hpp
//  LeetCode
//
//  Created by GenZhang on 2023/12/22.
//

#ifndef hot100_34_hpp
#define hot100_34_hpp

#include "ListNode.hpp"
#include <vector>
using namespace std;

class hot100_34 {
public:
    // 分治法，两两合并
    /**
     也可以用优先级队列，
     // 创建小根堆
     priority_queue<ListNode*, vector<ListNode*>, cmp> que;
     
     struct cmp {
         bool operator() (ListNode *n1, ListNode *n2)
         {
             return n1->val > n2->val; // 小根堆
         }
     };
     */
    ListNode* mergeKLists(vector<ListNode*>& lists);
};

/**
 给你一个链表数组，每个链表都已经按升序排列。

 请你将所有链表合并到一个升序链表中，返回合并后的链表。
 
 输入：lists = [[1,4,5],[1,3,4],[2,6]]
 输出：[1,1,2,3,4,4,5,6]
 解释：链表数组如下：
 [
   1->4->5,
   1->3->4,
   2->6
 ]
 将它们合并到一个有序链表中得到。
 1->1->2->3->4->4->5->6
 */

#endif /* hot100_34_hpp */
