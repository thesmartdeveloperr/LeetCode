/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL or head->next==NULL)
            return false;
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast->next and fast->next->next){
            fast=fast->next->next;
            slow=slow->next;
            if(slow==fast)
                return true;
        }
        return false;
    }
};