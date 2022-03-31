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
    void f(TreeNode *root,vector<int>&preorder){
        if(root==NULL)
            return;
        preorder.push_back(root->val);
        f(root->left,preorder);
        f(root->right,preorder);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> preorder;
        f(root,preorder);
        unordered_map<int,int> mp;
        for(auto i:preorder){
            if(mp.find(k-i)!=mp.end()){
                return true;
            }
            mp[i]++;
        }
        return false;
    }
};