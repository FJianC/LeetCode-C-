/*
 * @lc app=leetcode.cn id=206 lang=cpp
 *
 * [206] 反转链表
 *
 * https://leetcode-cn.com/problems/reverse-linked-list/description/
 *
 * algorithms
 * Easy (60.25%)
 * Total Accepted:    50.8K
 * Total Submissions: 84.3K
 * Testcase Example:  '[1,2,3,4,5]'
 *
 * 反转一个单链表。
 *
 * 示例:
 *
 * 输入: 1->2->3->4->5->NULL
 * 输出: 5->4->3->2->1->NULL
 *
 * 进阶:
 * 你可以迭代或递归地反转链表。你能否用两种方法解决这道题？
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
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        // if (!head) return head;
        // ListNode* cur = head->next;
        // head->next = NULL;
        // while (cur) {
        //     ListNode* nextptr = cur->next;
        //     cur->next = head;
        //     head = cur;
        //     cur = nextptr;
        // }
        // return head;
        // ListNode* cur = NULL;
        // while (head) {
        //     ListNode* next = head->next;
        //     head->next = cur;
        //     cur = head;
        //     head = next;
        // }
        // return cur;
        if (!head || !(head->next)) return head;
        ListNode* node = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return node;
    }
};
