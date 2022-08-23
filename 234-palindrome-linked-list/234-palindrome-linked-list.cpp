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
    void checkPalin(ListNode *&head,ListNode *tmp,bool &fl){
        if(!tmp)
            return;
        checkPalin(head,tmp->next,fl);
        if(head->val!=tmp->val){
            fl=false;
            return;
        }
        head=head->next;
    }
    bool isPalindrome(ListNode* head) {
        bool fl=true;
        checkPalin(head,head,fl);
        return fl;
    }
};