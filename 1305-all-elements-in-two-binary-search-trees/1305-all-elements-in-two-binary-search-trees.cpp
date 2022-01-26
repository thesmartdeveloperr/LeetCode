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
    void findPreorder(TreeNode*root,vector<int> &res){
        if(root==NULL)
            return;
        res.push_back(root->val);
        findPreorder(root->left,res);
        findPreorder(root->right,res);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> res,res1,res2;
        findPreorder(root1,res1);
        findPreorder(root2,res2);
        for(int i=0;i<res1.size();++i)
            res.push_back(res1[i]);
        for(int i=0;i<res2.size();++i)
            res.push_back(res2[i]);
        sort(res.begin(),res.end());
        return res;
    }
};