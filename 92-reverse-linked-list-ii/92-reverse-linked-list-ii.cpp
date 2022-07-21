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
    // ListNode * reverse(ListNode *start){
    //     ListNode *tmp=NULL,*dummy=NULL;
    //     while(start){
    //         tmp=start->next;
    //         start->next=dummy;
    //         dummy=start;
    //         start=tmp;    
    //     }
    //     return dummy;
    // }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
//         ListNode *h=head,*prev=head;
//         int count=1;
//         while(count<left){
//             prev=head;
//             head=head->next;
//             count++;
//         }
//         head=prev->next;
//         ListNode *end=NULL;
//         while(count<=right){
//             end=head;
//             if(!head)
//                 break;
//             head=head->next;
//             count++;
//         }
        
//         cout<<prev->val<<" "<<end->val<<endl;
//         ListNode *nex=end;
//         if(end){
//             nex=end->next;
//             end->next=NULL;   
//         }
//         ListNode *start=prev->next;
//         ListNode *newhead=reverse(start);
//         prev->next=newhead;
//         while(newhead and newhead->next){
//             newhead=newhead->next;
//         }
//         if(newhead)
//             newhead->next=nex;
//         return h;
        ListNode *dummy = new ListNode(0); // created dummy node
        dummy->next = head;
        ListNode *prev = dummy; // intialising prev pointer on dummy node
        
        for(int i = 0; i < left - 1; i++)
            prev = prev->next; // adjusting the prev pointer on it's actual index
        
        ListNode *curr = prev->next; // curr pointer will be just after prev
        // reversing
        for(int i = 0; i < right - left; i++){
            ListNode *forw = curr->next; // forw pointer will be after curr
            curr->next = forw->next;
            forw->next = prev->next;
            prev->next = forw;
        }
        return dummy->next;
    }
};