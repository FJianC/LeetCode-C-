/*
 * @lc app=leetcode.cn id=206 lang=cpp
 *
 * [206] 反转链表
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
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        // vector<ListNode*> vec = {nullptr};
        // auto temp = head;
        // while (temp) {
        //     vec.push_back(temp);
        //     temp = temp->next;
        // }
        // for (int i = vec.size() - 1; i > 0; --i) {
        //     vec[i]->next = vec[i - 1];
        // }
        // return vec.back();
        // 1.迭代，双指针
        //  a):
        // ListNode* prev = nullptr;
        // while (head) {
        //     auto next = head->next;
        //     head->next = prev;
        //     prev = head;
        //     head = next;
        // }
        // return prev;
        //  b)
        ListNode* cur = head;
        while (head && head->next) {
            auto t = head->next->next;
            head->next->next = cur;
            cur = head->next;
            head->next = t;
        }
        return cur;
        // 2.递归
        // if (!head || !head->next) return head;
        // ListNode* new_head = reverseList(head->next);
        // head->next->next = head;
        // head->next = nullptr;
        // return new_head;
    }
};
// @lc code=end

