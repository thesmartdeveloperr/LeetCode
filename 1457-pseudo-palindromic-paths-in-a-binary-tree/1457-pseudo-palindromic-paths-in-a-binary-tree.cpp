/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int res=0;
    unordered_map<int,int> mp;
    void f(TreeNode* root) {
        if(!root)
            return;
        mp[root->val]++;
        if(!root->left && !root->right) {
            int ct=0;
            for(auto i:mp){
                if(i.second%2!=0){
                    ct++;
                }
                if(ct>1)
                    break;
            }
            if(ct<=1)
                res++;
        }
        f(root->left);
        f(root->right); 
        mp[root->val]--;
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        if(!root)
            return 0;
        f(root);
        return res;
    }
};