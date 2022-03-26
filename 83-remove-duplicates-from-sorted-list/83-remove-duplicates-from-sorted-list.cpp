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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *tmp=head;
        while(tmp){
            ListNode *t=tmp;
            while(t->next and t->next->val==t->val){
                t=t->next;
            }
            tmp->next=t->next;
            tmp=t->next;
        }
        return head;
    }
};