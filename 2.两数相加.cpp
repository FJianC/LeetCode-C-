/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
#include <vector>
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        auto head = new ListNode();
        auto temp = head;
        int sum = 0;
        while (l1 || l2 || sum >= 10) {
            sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + (sum / 10);
            temp->next = new ListNode(sum >= 10 ? sum - 10 : sum);
            temp = temp->next;

            l1 = l1 ? l1->next : nullptr;
            l2 = l2 ? l2->next : nullptr;

        }
        return head->next;
    }
};
// @lc code=end

