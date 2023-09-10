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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      ListNode* l3 = new ListNode(0);
      int carry= 0;
      ListNode* result= l3;

      while(l1 && l2){
        int value = (l1->val) + (l2->val) + carry;
        carry = value / 10;
        l3->next = new ListNode(value % 10);
        l3 = l3->next;
        l1 = l1->next;
        l2 = l2->next;
      }
      while(l1){
          int value = (l1->val)  + carry;
          carry = (value / 10);
          l3->next = new ListNode(value % 10);
          l3 = l3->next;
          l1 = l1->next;
      }
       while(l2){
          int value = (l2->val)  + carry;
          carry = (value / 10);
          l3->next = new ListNode(value % 10);
          l3 = l3->next;
          l2 = l2->next;
      }
    //   if all the elemnts are added and still carry is remaining
    if(carry){
        l3->next = new ListNode(carry);
        l3 = l3->next;
    }
    // intially result is pointing at 0 which is our initial node
    result = result->next;
    return result;
    }
};