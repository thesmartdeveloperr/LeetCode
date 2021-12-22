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
    void reorderList(ListNode* head) {
        vector<int> v;
        ListNode *Head=head;
        while(head){
            v.push_back(head->val);
            head=head->next;
        }
        int i=0,j=v.size()-1;
        vector<int> res;
        while(i<j){
            res.push_back(v[i++]);
            res.push_back(v[j--]);
        }
        if(i==j)
            res.push_back(v[i]);
        i=0;
        while(Head){
            Head->val=res[i++];
            Head=Head->next;
        }
    }
};