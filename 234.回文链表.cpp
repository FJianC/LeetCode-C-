/*
 * @lc app=leetcode.cn id=234 lang=cpp
 *
 * [234] 回文链表
 *
 * https://leetcode-cn.com/problems/palindrome-linked-list/description/
 *
 * algorithms
 * Easy (36.02%)
 * Total Accepted:    21K
 * Total Submissions: 58.4K
 * Testcase Example:  '[1,2]'
 *
 * 请判断一个链表是否为回文链表。
 *
 * 示例 1:
 *
 * 输入: 1->2
 * 输出: false
 *
 * 示例 2:
 *
 * 输入: 1->2->2->1
 * 输出: true
 *
 *
 * 进阶：
 * 你能否用 O(n) 时间复杂度和 O(1) 空间复杂度解决此题？
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
    bool isPalindrome(ListNode* head) {
        // vector<int> v;
        // while (head) {
        //     v.push_back(head->val);
        //     head = head->next;
        // }
        // for (int i = 0, j = v.size() - 1; i < j; i++, j--) {
        //     if(v[i] != v[j]) return false;
        // }
        // return true;
        ListNode *cur = head;//this is the normal cursor
        return judge(head, cur);
    }
    bool judge(ListNode *head, ListNode* &cur) {
        if (!head) return true;
        if (!judge(head->next, cur)) return false;
        if (cur->val != head->val) return false;
        else {cur = cur->next; return true;}
    }
};
