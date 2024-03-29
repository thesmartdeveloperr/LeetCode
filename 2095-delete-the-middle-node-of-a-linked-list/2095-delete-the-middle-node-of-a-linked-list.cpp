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
        int n=0,ct=0,mid=0;
        ListNode *tmp=head;
        while(tmp)
            n++,tmp=tmp->next;
        mid=n/2+1;
        if(mid==1)
            return NULL;
        tmp=head;
        while(ct<mid-2)
            ct++,tmp=tmp->next;
        tmp->next=tmp->next->next;
        return head;
    }
};