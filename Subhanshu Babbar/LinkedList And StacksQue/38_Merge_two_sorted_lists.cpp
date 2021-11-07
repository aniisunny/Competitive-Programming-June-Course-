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
    ListNode* insert(ListNode* n, ListNode* to) {
        // Insert n after to and return the rest of list n
        ListNode* l = n->next;
        n->next = to->next;
        to->next = n;
        return l;
    }

    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* h = l1;
        ListNode* t = l2;
        if (h == nullptr) { return t; }
        if (t == nullptr) { return h; }
        if (l2->val < l1->val) {
            h = l2;
            t = l1;
        }
        ListNode* curr = h;
        while (curr->next != nullptr) {
            if (t == nullptr) {
                return h;
            }
            if (t->val < (curr->next)->val) {
                t = insert(t, curr);
            }
            curr = curr->next;
        }
        curr->next = t;
        return h;
    }

};