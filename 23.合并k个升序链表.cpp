/*
 * @lc app=leetcode.cn id=23 lang=cpp
 *
 * [23] 合并K个升序链表
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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        // 1.
        // auto head = new ListNode();
        // auto temp = head;
        // while (true) {
        //     int find = -1;
        //     for (int i = 0; i < lists.size(); ++i) {
        //         if (!lists[i] || find >= 0 && lists[find]->val <= lists[i]->val) continue;
        //         find = i;
        //     }
        //     if (find < 0) break;

        //     temp->next = new ListNode(*lists[find]);
        //     temp = temp->next;
        //     lists[find] = lists[find]->next;
        // }
        // return head->next;
        // 2. 顺序合并
        auto func = [](ListNode* a, ListNode* b) {
            if (!a || !b) return a ? a : b;
            ListNode head;
            auto tail = &head;
            while (a && b) {
                if (a->val < b->val) {
                    tail->next = a; a = a->next;
                } else {
                    tail->next = b; b = b->next;
                }
                tail = tail->next;
            }
            tail->next = a ? a : b;
            return head.next;
        };
        ListNode* ret = nullptr;
        for (auto& node : lists) {
            ret = func(ret, node);
        }
        return ret;
    }
};
// @lc code=end

