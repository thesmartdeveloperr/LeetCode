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
        int i=0,n=0;
        //count how many nodes are there...
        while(tmp){
            tmp=tmp->next;
            n++;
        }
        int pos=n-k;
        while(tmp1 and --k)
            tmp1=tmp1->next;
        while(tmp2 and pos--)
            tmp2=tmp2->next;
        //tmp1 will point to the k node, tmp2 will point to the n-k             node.
        swap(tmp1->val,tmp2->val);
        return head;
    }
};