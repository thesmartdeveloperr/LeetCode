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
    void f(TreeNode *root,vector<int> &res){
        if(root==NULL)
            return;
        res.push_back(root->val);
        f(root->left,res);
        f(root->right,res);
        return;
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        f(root,res);
        return res;
    }
};