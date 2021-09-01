// *
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *tmp=head;
        ListNode *ttmp=head;
        vector<int> Tmp;
        while(tmp){
            Tmp.push_back(tmp->val);
            tmp=tmp->next;
        }
        int k=1;
        while(ttmp){
            ttmp->val=Tmp[Tmp.size()-k];
            ttmp=ttmp->next;
            k++;
        }
        return head;
    }
};