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
    void preorder(TreeNode *root,int mx,int &res){
        if(!root)
            return;   
        if(root->val>=mx){
            mx=root->val;
            res+=1;
        }
        preorder(root->left,mx,res);
        preorder(root->right,mx,res);
    }
    int goodNodes(TreeNode* root) {
        int res=0;
        preorder(root,INT_MIN,res);
        return res;
    }
};