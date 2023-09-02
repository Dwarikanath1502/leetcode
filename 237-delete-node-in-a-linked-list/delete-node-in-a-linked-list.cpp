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
    void deleteNode(ListNode* node) {
        node->val = node->next->val; //copy the next node val in the current node, it will replace current node value, so the current node now holds the next node data and it's data is gone
        //upadte pointer 
        node->next = node->next->next;   
    }
};