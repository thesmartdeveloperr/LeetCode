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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode *p=new ListNode();
        ListNode *head=NULL;
        vector<int> res;
        for(int i=0;i<lists.size();++i){
            ListNode *t=lists[i];
            while(t){
                res.push_back(t->val);
                t=t->next;
            }
        }
        int k=0;
        sort(res.begin(),res.end());
        for(auto i:res){
            ListNode *tmp=new ListNode();
            tmp->val=i;
            tmp->next=NULL;
        
            p->next=tmp;
            p=tmp;
            if(k==0)
                head=p;
            k++;
        }
        return head;
    }
};