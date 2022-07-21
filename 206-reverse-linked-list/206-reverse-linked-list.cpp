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
       ListNode *start=head,*tmp=NULL,*dummy=NULL;
        while(start){
            tmp=start->next;
            start->next=dummy;
            dummy=start;
            start=tmp;    
        }
        return dummy; 
    }
};