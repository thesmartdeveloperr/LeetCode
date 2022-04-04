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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *tmp=head,*tmp1=head,*tmp2=head;
        int K=k,n=0;
        //count how many nodes are there...
        while(tmp){
            tmp=tmp->next;
            n++;
        }
        while(tmp1 and --k){
            tmp1=tmp1->next;
        }
        int i=0,pos=n-K;
        while(tmp2 and i<pos){
            tmp2=tmp2->next;
            i++;
        }
        cout<<tmp1->val<<" "<<tmp2->val;
        swap(tmp1->val,tmp2->val);
        return head;
    }
};