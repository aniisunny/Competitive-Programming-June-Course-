class Solution {
public:
    void deleteNode(ListNode* node) {
        *node = *(node->next);
    }
};