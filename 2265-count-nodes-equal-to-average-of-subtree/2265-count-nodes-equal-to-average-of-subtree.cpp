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
    int ct=0;
    int sum=0,n=0;
    void preorder(TreeNode *root,int &sum){
        if(!root)
            return;   
        sum+=root->val;
        n++;
        preorder(root->left,sum);
        preorder(root->right,sum);
    }
    void f(TreeNode *root){
        if(!root)
            return;
        f(root->left);
        f(root->right);
        preorder(root,sum);
        if(sum/n==root->val)
            ct++;
        n=0;
        sum=0;
    }
    int averageOfSubtree(TreeNode* root) {
        f(root);
        return ct;
    }
};