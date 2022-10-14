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
    ListNode* deleteMiddle(ListNode* head) {
        int n=0;
        ListNode *tmp=head;
        while(tmp){
            n++;
            tmp=tmp->next;
        }
        int mid=n/2+1;
        if(mid==1){
            head=NULL;
            return head;
        }
        int ct=0;
        tmp=head;
        while(ct<mid-2){
            ct++;
            tmp=tmp->next;
        }
        tmp->next=tmp->next->next;
        return head;
    }
};