/*
 * @lc app=leetcode.cn id=83 lang=cpp
 *
 * [83] 删除排序链表中的重复元素
 *
 * https://leetcode-cn.com/problems/remove-duplicates-from-sorted-list/description/
 *
 * algorithms
 * Easy (44.58%)
 * Total Accepted:    21.4K
 * Total Submissions: 47.8K
 * Testcase Example:  '[1,1,2]'
 *
 * 给定一个排序链表，删除所有重复的元素，使得每个元素只出现一次。
 *
 * 示例 1:
 *
 * 输入: 1->1->2
 * 输出: 1->2
 *
 *
 * 示例 2:
 *
 * 输入: 1->1->2->3->3
 * 输出: 1->2->3
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
    ListNode* deleteDuplicates(ListNode* h) {
        // ListNode * re = head;
        // while (head != NULL) {
        //     ListNode *t = head->next;
        //     while (t != NULL) {
        //         if (head->val != t->val) break;
        //         t = t->next;
        //     }
        //     head->next = t;
        //     head = t;
        // }
        // return re;
        return h && (h->next = deleteDuplicates(h->next)) && h->next->val == h->val ? h->next : h;
    }
};
