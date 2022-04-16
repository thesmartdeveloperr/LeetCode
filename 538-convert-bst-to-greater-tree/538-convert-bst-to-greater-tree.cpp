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
        if(root==NULL){
            return;
        }
        inorder(root->left,sorted);
        sorted.push_back(root->val);
        inorder(root->right,sorted);
    }
    void postorder(TreeNode *root,vector<int> sorted,vector<int> pref){
        if(root==NULL){
            return;
        }
        postorder(root->left,sorted,pref);
        postorder(root->right,sorted,pref);
        int pos=lower_bound(sorted.begin(),sorted.end(),root->val)-sorted.begin();
        int n=pref.size();
        int val;
        val= pos==0 ? 0 : pref[pos-1];
        root->val=pref[n-1]-val;
    }
    TreeNode* convertBST(TreeNode* root) {
        vector<int> sorted;
        inorder(root,sorted);
        int sum=0;
        vector<int> pref(sorted.size());
        for(int i=0;i<sorted.size();++i){
            sum+=sorted[i];
            pref[i]=sum;
        }
        postorder(root,sorted,pref);
        return root;
    }
};