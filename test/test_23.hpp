#include "head.hpp"

class Test_23 {
public:
    Test_23() {
        //[[1,4,5],[1,3,4],[2,6]]
        vector<ListNode*> lists;
        ListNode n1(5);
        ListNode n2(4, &n1);
        ListNode n3(1, &n2);
        lists.push_back(&n3);
        ListNode n4(4);
        ListNode n5(3, &n4);
        ListNode n6(1, &n5);
        lists.push_back(&n6);
        ListNode n7(6);
        ListNode n8(2, &n7);
        lists.push_back(&n8);
        auto t = mergeKLists(lists);
        while (t) {
            std::cout << t->val << "->";
            t = t->next;
        }
        std::cout << std::endl;
    }

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
