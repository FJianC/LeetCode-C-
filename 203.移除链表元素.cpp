/*
 * @lc app=leetcode.cn id=203 lang=cpp
 *
 * [203] 移除链表元素
 *
 * https://leetcode-cn.com/problems/remove-linked-list-elements/description/
 *
 * algorithms
 * Easy (40.36%)
 * Total Accepted:    21.9K
 * Total Submissions: 54.3K
 * Testcase Example:  '[1,2,6,3,4,5,6]\n6'
 *
 * 删除链表中等于给定值 val 的所有节点。
 *
 * 示例:
 *
 * 输入: 1->2->6->3->4->5->6, val = 6
 * 输出: 1->2->3->4->5
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
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        // if (!head) return head;
        // while (head->val == val) {
        //     head = head->next;
        //     if (!head) return head;
        // }
        // ListNode* pre = head;
        // ListNode* cur = pre->next;
        // while (cur) {
        //     if (cur->val != val) pre = cur;
        //     else pre->next = cur->next;
        //     cur = pre->next;
        // }
        // return head;
        if (head==NULL){
            return head;
        }
        ListNode* p=head;
        while(p->next!=NULL){
            if (p->next->val == val){
                p->next = p->next->next;
            }
            else{
                p=p->next;
            }
        }
        if (head->val==val)
            head=head->next;
        return head;
    }
};
