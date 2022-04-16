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
    void preorder(TreeNode *root,vector<int> &Preorder){
        if(root==NULL){
            return;
        }
        Preorder.push_back(root->val);
        preorder(root->left,Preorder);
        preorder(root->right,Preorder);
    }
    void postorder(TreeNode *root,vector<int> sorted){
        if(root==NULL){
            return;
        }
        postorder(root->left,sorted);
        postorder(root->right,sorted);
        int pos=lower_bound(sorted.begin(),sorted.end(),root->val)-sorted.begin();
        root->val=accumulate(sorted.begin()+pos,sorted.end(),0);
    }
    TreeNode* convertBST(TreeNode* root) {
        vector<int> sorted;
        preorder(root,sorted);
        sort(sorted.begin(),sorted.end());
        postorder(root,sorted);
        return root;
    }
};