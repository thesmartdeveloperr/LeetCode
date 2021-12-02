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
    ListNode* oddEvenList(ListNode* head) {
        ListNode *tmp=head;
        vector<int> even,odd;
        int i=1;
        while(head){
            if(i%2==1)
                odd.push_back(head->val);
            else
                even.push_back(head->val);
            head=head->next;
            i++;
        }
        int j=0,k=0;
        ListNode *Head=tmp;
        while(tmp){
            if(j<odd.size())
                tmp->val=odd[j++];
            else
                tmp->val=even[k++];
            tmp=tmp->next;
        }
        return Head;
    }
};