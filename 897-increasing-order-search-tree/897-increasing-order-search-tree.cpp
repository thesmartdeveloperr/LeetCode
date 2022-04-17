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
    void inorder(TreeNode *root,vector<int> &sorted){
        if(!root){
            return;
        }
        inorder(root->left,sorted);
        sorted.push_back(root->val);
        inorder(root->right,sorted);
    }
    TreeNode * createTree(TreeNode *root,vector<int> sorted){
        TreeNode *Root=root;
        root->val=sorted[0];
        for(int i=1;i<sorted.size();++i){
            TreeNode *rigt=new TreeNode();
            root->left=NULL;
            root->right=rigt;
            root=rigt;
            root->val=sorted[i];
        }
        return Root;
    }
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> sorted;
        inorder(root,sorted);
        return createTree(root,sorted);;
    }
};