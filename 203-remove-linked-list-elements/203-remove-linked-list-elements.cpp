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
    ListNode* removeElements(ListNode* head, int val) {
        if(not head)
            return head;
        while(head and head->val==val){
            head=head->next;
        }
        ListNode *tmp=head;
        while(tmp){
            if(tmp->next==NULL){
                if(tmp->val==val){
                    head=head->next;   
                }
                else{
                    tmp=tmp->next;
                }
                continue;
            }
            else if(tmp->next->next==NULL and tmp->next->val==val){
                tmp->next=NULL;
            }
            else if(tmp->next->val==val){
                tmp->next=tmp->next->next;
                continue;
            }
            tmp=tmp->next;
        }
        return head;
    }
};