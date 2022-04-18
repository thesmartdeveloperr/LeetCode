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
    void inorder(TreeNode *root,vector<int> &sorted, int k){
        if(root==NULL)
            return;
        inorder(root->left,sorted,k);
        sorted.push_back(root->val);
        if(sorted.size()==k)
            return;
        inorder(root->right,sorted,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> sorted;
        inorder(root,sorted,k);
        return sorted[k-1];
    }
};