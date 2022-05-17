/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode *ans=NULL;
    void inorder(TreeNode *cloned,TreeNode *target){
        if(!cloned)
            return;
        inorder(cloned->left,target);
        if(cloned->val==target->val)
            ans=cloned;
        inorder(cloned->right,target);
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        inorder(cloned,target);
        return ans;
    }
};