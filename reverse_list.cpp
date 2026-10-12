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
      ListNode* next= NULL;
       ListNode* curr= head;
        ListNode*prev = NULL;

         while (curr!= NULL){
            next=curr->next;              // saving the next so that we dont loose track
            curr->next = prev;              // reversing arrow
            prev =curr;                   //moves prev
            curr=next;            // moving current
         }   
        return prev;
    }
};
