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
    int i;
    void inorder(TreeNode *root,vector<int>&sorted){
        if(root==NULL)
            return;
        inorder(root->left,sorted);
        sorted.push_back(root->val);
        inorder(root->right,sorted);
    }
    void inorder_change(TreeNode *root,vector<int> &sorted){
        if(root==NULL)
            return;
        inorder_change(root->left,sorted);
        root->val=sorted[i++];
        inorder_change(root->right,sorted);
    }
    void recoverTree(TreeNode* root) {
        vector<int> sorted;
        inorder(root,sorted);
        sort(sorted.begin(),sorted.end());
        i=0;
        inorder_change(root,sorted);
    }
};