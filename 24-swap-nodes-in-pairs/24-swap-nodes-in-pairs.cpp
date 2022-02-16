class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode *curr=head;
        ListNode *nex=NULL;
        ListNode *prev=NULL;
        
        int count=0;
        while(curr!=NULL and count<2){
            nex=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nex;
            count++;
        }
        if(nex!=NULL)
            head->next=swapPairs(nex);
        return prev;
    }
};