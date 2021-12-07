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
    int getDecimalValue(ListNode* head) {
        vector<int> bits;
        int res=0;
        while(head){
            bits.push_back(head->val);
            head=head->next;
        }
        int i=0,n=bits.size();
        while(i<n){
            res+=bits[i]*pow(2,n-i-1);
            i++;
        }
        return res;
    }
};