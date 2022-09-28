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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *h=head,*he=head;
        int ct=0;
        while(h){
            ct++;
            h=h->next;
        }
        if(ct==n){
            ListNode *h=head;
            if(h->next)
                h=h->next;
            else
                h=NULL;
            return h;
        }
        // [1,2]
        // 2
        int cnt=0;
        while(he){
            cnt++;
            if(cnt==ct-n){
                he->next=he->next->next;
                // del he->next;
                break;
            }
            he=he->next;
        }
        return head;
    }
};