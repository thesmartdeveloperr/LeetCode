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
    bool isPalindrome(ListNode* head) {
        bool isPalin=true;
        ListNode *tmp=head;
        vector<int> Tmp;
        while(tmp){
            Tmp.push_back(tmp->val);
            tmp=tmp->next;
        }
        vector<int> ttmp;
        for(int i=Tmp.size()-1;i>=0;--i)
        ttmp.push_back(Tmp[i]);
        
        for(int i=0;i<Tmp.size();++i){
            if(Tmp[i]!=ttmp[i]){
                isPalin=false;
                break;
            }
        }
        return isPalin;
    }
};