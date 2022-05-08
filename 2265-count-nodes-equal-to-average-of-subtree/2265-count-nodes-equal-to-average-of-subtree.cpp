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
    vector<TreeNode *> ptrs;
    void preorder(TreeNode *root){
        if(!root)
            return;
        preorder(root->left);
        preorder(root->right);
        TreeNode *p=root;
        ptrs.push_back(p);
    }
    void computeSum(TreeNode *root,vector<int> &res){
        if(!root)
            return;
        computeSum(root->left,res);
        res[0]+=root->val;
        res[1]++;
        computeSum(root->right,res);
    }
    int averageOfSubtree(TreeNode* root) {
        preorder(root);
        int cnt=0;
        for(auto i:ptrs){
            if(i==NULL)
                continue;
            vector<int> res={0,0};
            computeSum(i,res);
            if(res[0]/res[1]==i->val)
                cnt++;
        }
        return cnt;
    }
};