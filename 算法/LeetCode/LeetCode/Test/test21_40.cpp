//
//  test21_40.cpp
//  LeetCode
//
//  Created by GenZhang on 2023/12/22.
//

#include "test21_40.hpp"
#include "hot100_21.hpp"
#include "hot100_22.hpp"
#include "hot100_23.hpp"
#include "hot100_24.hpp"
#include "hot100_25.hpp"
#include "hot100_26.hpp"
#include "hot100_27.hpp"
#include "hot100_28.hpp"
#include "hot100_29.hpp"
#include "hot100_30.hpp"
#include "hot100_31.hpp"
#include "hot100_32.hpp"
#include "hot100_33.hpp"
#include "hot100_34.hpp"
#include "hot100_35.hpp"
#include "hot100_36.hpp"
#include "hot100_37.hpp"
#include "hot100_38.hpp"
#include "hot100_39.hpp"
#include "hot100_40.hpp"

void test100_21()
{
    hot100_21 obj = hot100_21();
    vector<vector<int>> matrix = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    int target = 26;
    bool out = obj.searchMatrix(matrix, target);
    cout << out << endl;
}
void test100_22()
{
    ListNode *n1 = new ListNode(5, nullptr);
    ListNode *n2 = new ListNode(4, n1);
    ListNode *n3 = new ListNode(8, n2);
    
    ListNode *n4 = new ListNode(1, n3);
    ListNode *n5 = new ListNode(1, n3);
    ListNode *n6 = new ListNode(4, n4);
    ListNode *n7 = new ListNode(6, n5);
    ListNode *n8 = new ListNode(5, n7);
    hot100_22 obj = hot100_22();
    ListNode *out = obj.getIntersectionNode(n8, n6);
    if (out) {
        cout << out->val << endl;
    } else {
        cout << "none" << endl;
    }
}
void test100_23()
{
    ListNode *n1 = new ListNode(5, nullptr);
    ListNode *n2 = new ListNode(4, n1);
    ListNode *n3 = new ListNode(3, n2);
    ListNode *n4 = new ListNode(2, n3);
    ListNode *n5 = new ListNode(1, n4);
    
    hot100_23 obj = hot100_23();
    ListNode *out = obj.reverseList(n5);
    while (out) {
        cout << out->val << ' ';
        out = out->next;
    }
    cout << endl;
}
void test100_24()
{
    ListNode *n1 = new ListNode(1, nullptr);
    ListNode *n2 = new ListNode(2, n1);
    ListNode *n3 = new ListNode(2, n2);
    ListNode *n4 = new ListNode(1, n3);
    
    hot100_24 obj = hot100_24();
    bool out = obj.isPalindrome(n4);
    cout << out << endl;
}
void test100_25()
{
    ListNode *n1 = new ListNode(-4, nullptr);
    ListNode *n2 = new ListNode(0, n1);
    ListNode *n3 = new ListNode(2, n2);
    ListNode *n4 = new ListNode(3, n3);
    n1->next = n3;
    
    hot100_25 obj = hot100_25();
    bool out = obj.hasCycle(n4);
    cout << out << endl;
}
void test100_26()
{
    ListNode *n1 = new ListNode(-4, nullptr);
    ListNode *n2 = new ListNode(0, n1);
    ListNode *n3 = new ListNode(2, n2);
    ListNode *n4 = new ListNode(3, n3);
    n1->next = n3;
    
    hot100_26 obj = hot100_26();
    ListNode* out = obj.detectCycle(n4);
    if (out) {
        cout << out->val << endl;
    } else {
        cout << "none" << endl;
    }
    
}
void test100_27()
{
    ListNode *n1 = new ListNode(4, nullptr);
    ListNode *n2 = new ListNode(2, n1);
    ListNode *n3 = new ListNode(1, n2);
    
    ListNode *n4 = new ListNode(4, nullptr);
    ListNode *n5 = new ListNode(3, n4);
    ListNode *n6 = new ListNode(1, n5);
    
    hot100_27 obj = hot100_27();
    ListNode *out = obj.mergeTwoLists(n3, n6);
    while (out) {
        cout << out->val << ' ';
        out = out->next;
    }
    cout << endl;
}
void test100_28()
{
    ListNode *n1 = new ListNode(3, nullptr);
    ListNode *n2 = new ListNode(4, n1);
    ListNode *n3 = new ListNode(2, n2);
    
    ListNode *n4 = new ListNode(4, nullptr);
    ListNode *n5 = new ListNode(6, n4);
    ListNode *n6 = new ListNode(5, n5);
    
    hot100_28 obj = hot100_28();
    ListNode *out = obj.addTwoNumbers(n3, n6);
    while (out) {
        cout << out->val << ' ';
        out = out->next;
    }
    cout << endl;
}
void test100_29()
{
    ListNode *n1 = new ListNode(5, nullptr);
    ListNode *n2 = new ListNode(4, n1);
    ListNode *n3 = new ListNode(3, n2);
    ListNode *n4 = new ListNode(2, n3);
    ListNode *n5 = new ListNode(1, n4);
    
    hot100_29 obj = hot100_29();
    ListNode *out = obj.removeNthFromEnd(n5, 2);
    while (out) {
        cout << out->val << ' ';
        out = out->next;
    }
    cout << endl;
}
void test100_30()
{
    ListNode *n1 = new ListNode(5, nullptr);
    ListNode *n2 = new ListNode(4, n1);
    ListNode *n3 = new ListNode(3, n2);
    ListNode *n4 = new ListNode(2, n3);
    
    hot100_30 obj = hot100_30();
    ListNode *out = obj.swapPairs(n4);
    while (out) {
        cout << out->val << ' ';
        out = out->next;
    }
    cout << endl;
}
void test100_31()
{
    ListNode *n1 = new ListNode(5, nullptr);
    ListNode *n2 = new ListNode(4, n1);
    ListNode *n3 = new ListNode(3, n2);
    ListNode *n4 = new ListNode(2, n3);
    ListNode *n5 = new ListNode(1, n4);
    
    hot100_31 obj = hot100_31();
    ListNode *out = obj.reverseKGroup(n5, 2);
    while (out) {
        cout << out->val << ' ';
        out = out->next;
    }
    cout << endl;
}
void test100_32()
{
    Node *n1 = new Node(7);
    Node *n2 = new Node(13);
    Node *n3 = new Node(11);
    Node *n4 = new Node(10);
    Node *n5 = new Node(1);
    
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n2->random = n1;
    n3->random = n5;
    n4->random = n3;
    n5->random = n1;
    
    hot100_32 obj = hot100_32();
    Node *out = obj.copyRandomList(n1);
    while (out) {
        cout << out->val << ' ';
        if (out->random) {
            cout << out->random->val << ' ';
        } else {
            cout << "null ";
        }
        out = out->next;
        cout << "|";
    }
    cout << endl;
}
void test100_33()
{
    ListNode *n1 = new ListNode(0, nullptr);
    ListNode *n2 = new ListNode(4, n1);
    ListNode *n3 = new ListNode(3, n2);
    ListNode *n4 = new ListNode(5, n3);
    ListNode *n5 = new ListNode(-1, n4);
    
    hot100_33 obj = hot100_33();
    ListNode *out = obj.sortList(n5);
    while (out) {
        cout << out->val << ' ';
        out = out->next;
    }
    cout << endl;
}
void test100_34()
{
    vector<ListNode*> lists;
    
    ListNode *n1 = new ListNode(5, nullptr);
    ListNode *n2 = new ListNode(4, n1);
    ListNode *n3 = new ListNode(1, n2);
    
    ListNode *n4 = new ListNode(4, nullptr);
    ListNode *n5 = new ListNode(3, n4);
    ListNode *n6 = new ListNode(1, n5);
    
    ListNode *n7 = new ListNode(6, nullptr);
    ListNode *n8 = new ListNode(2, n7);
    
    lists.push_back(n3);
    lists.push_back(n6);
    lists.push_back(n8);
    
    hot100_34 obj = hot100_34();
    ListNode *out = obj.mergeKLists(lists);
    while (out) {
        cout << out->val << ' ';
        out = out->next;
    }
    cout << endl;
}
void test100_35()
{
    hot100_35 obj = hot100_35(2);
    obj.put(1, 1);
    obj.put(2, 2);
    cout << obj.get(1) << ' ';
    obj.put(3, 3);
    cout << obj.get(2) << ' ';
    obj.put(4, 4);
    cout << obj.get(1) << ' ';
    cout << obj.get(3) << ' ';
    cout << obj.get(4) << ' ';
}
void test100_36()
{
    TreeNode *n1 = new TreeNode(3);
    TreeNode *n2 = new TreeNode(2, n1, nullptr);
    TreeNode *n3 = new TreeNode(1, nullptr, n2);
    hot100_36 obj = hot100_36();
    vector<int> out = obj.inorderTraversal(n3);
    for (auto i : out) {
        cout << i << ' ';
    }
    cout << endl;
}
void test100_37()
{
    TreeNode *n1 = new TreeNode(15);
    TreeNode *n2 = new TreeNode(7);
    TreeNode *n3 = new TreeNode(20, n1, n2);
    TreeNode *n4 = new TreeNode(9);
    TreeNode *n5 = new TreeNode(3, n4, n3);
    hot100_37 obj = hot100_37();
    int out = obj.maxDepth(n5);
    cout << out << endl;
}
void test100_38()
{
    TreeNode *n1 = new TreeNode(1);
    TreeNode *n2 = new TreeNode(3);
    TreeNode *n3 = new TreeNode(6);
    TreeNode *n4 = new TreeNode(9);
    TreeNode *n5 = new TreeNode(2, n1, n2);
    TreeNode *n6 = new TreeNode(7, n3, n4);
    TreeNode *n7 = new TreeNode(4, n5, n6);
    
    hot100_38 obj = hot100_38();
    hot100_36 obj36 = hot100_36();
    vector<int> out = obj36.inorderTraversal(obj.invertTree(n7));
    for (auto i : out) {
        cout << i << ' ';
    }
    cout << endl;
}
void test100_39()
{
    TreeNode *n1 = new TreeNode(3);
    TreeNode *n2 = new TreeNode(4);
    TreeNode *n3 = new TreeNode(4);
    TreeNode *n4 = new TreeNode(3);
    TreeNode *n5 = new TreeNode(2, n1, n2);
    TreeNode *n6 = new TreeNode(2, n3, n4);
    TreeNode *n7 = new TreeNode(1, n5, n6);
    
    hot100_39 obj = hot100_39();
    bool out = obj.isSymmetric(n7);
    cout << out << endl;
}
void test100_40()
{
    TreeNode *n1 = new TreeNode(4);
    TreeNode *n2 = new TreeNode(5);
    TreeNode *n3 = new TreeNode(2, n1, n2);
    TreeNode *n4 = new TreeNode(3);
    TreeNode *n5 = new TreeNode(1, n3, n4);
    
    hot100_40 obj = hot100_40();
    int out = obj.diameterOfBinaryTree(n5);
    cout << out << endl;
}
