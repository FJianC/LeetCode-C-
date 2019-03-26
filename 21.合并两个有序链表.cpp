/*
 * @lc app=leetcode.cn id=21 lang=cpp
 *
 * [21] 合并两个有序链表
 *
 * https://leetcode-cn.com/problems/merge-two-sorted-lists/description/
 *
 * algorithms
 * Easy (53.33%)
 * Total Accepted:    53.9K
 * Total Submissions: 101K
 * Testcase Example:  '[1,2,4]\n[1,3,4]'
 *
 * 将两个有序链表合并为一个新的有序链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。 
 *
 * 示例：
 *
 * 输入：1->2->4, 1->3->4
 * 输出：1->1->2->3->4->4
 *
 *
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include <iostream>
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        // if (l1 == NULL) return l2;
        // if (l2 == NULL) return l1;
        // ListNode *head = new ListNode(0);
        // ListNode *result = head;
        // result->next = head;
        // while(l1 != NULL && l2 != NULL){
        //     if (l1->val <= l2->val) {
        //         head->next = new ListNode(l1->val);
        //         l1 = l1->next;
        //     } else {
        //         head->next = new ListNode(l2->val);
        //         l2 = l2->next;
        //     }
        //     head = head->next;
        // }
        // while(l1 != NULL){
        //     head->next = new ListNode(l1->val);
        //     head = head->next;
        //     l1 = l1->next;
        // }
        // while(l2 != NULL){
        //     head->next = new ListNode(l2->val);
        //     head = head->next;
        //     l2 = l2->next;
        // }
        // head->next = NULL;
        // return result->next;
        if (!l1 || l2 && l1->val > l2->val) std::swap(l1, l2);
        if (l1) l1->next = mergeTwoLists(l1->next, l2);
        return l1;
    }
};
