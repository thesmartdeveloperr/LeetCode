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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *tmp1=headA,*tmp2=headB;
        int lenA=0,lenB=0;
        while(tmp1){
            lenA++;
            tmp1=tmp1->next;
        }
        while(tmp2){
            lenB++;
            tmp2=tmp2->next;
        }
        tmp1=headA,tmp2=headB;
        int diff=abs(lenA-lenB);
        if(lenA>lenB){
            while(diff--)
                tmp1=tmp1->next;
        }
        else{
            while(diff--)
                tmp2=tmp2->next;
        }
        while(tmp1!=tmp2){
            tmp1=tmp1->next;
            tmp2=tmp2->next;
            if(!tmp1 or !tmp2)
                return NULL;
        }
        return tmp1;
    }
};