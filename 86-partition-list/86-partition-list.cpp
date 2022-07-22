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
    ListNode* partition(ListNode* head, int x) {
        ListNode *sm=new ListNode(),*lg=new ListNode();
        ListNode *small=sm,*large=lg;
        while(head){
            if(head->val<x){
                small->next=head;
                small=small->next;
            }
            else{
                large->next=head;
                large=large->next;
            }
            head=head->next;
        }
        large->next=NULL;
        small->next=lg->next;
        return sm->next;
    }
};