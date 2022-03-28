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
    bool f(TreeNode* r1,TreeNode* r2){    
        if(r1==NULL and r2==NULL)
            return true; 
		
        else if(r1==NULL or r2==NULL or r1->val!=r2->val)
            return false; 
        
        return f(r1->left, r2->right) and f(r1->right, r2->left);
    }
    bool isSymmetric(TreeNode* root){
        return f(root->left,root->right);     
    }
};