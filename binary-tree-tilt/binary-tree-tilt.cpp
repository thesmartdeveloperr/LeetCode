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
    int findTilt(TreeNode* root) {
        int tilt = 0;
        traverse(root, &tilt);
        return tilt;
    }
    int traverse(TreeNode *root, int *tilt){
        if(!root) return 0;
        int left = traverse(root->left, tilt);
        int right = traverse(root->right, tilt);
        *tilt += abs(left-right);
        return root->val + left + right;
    }
};