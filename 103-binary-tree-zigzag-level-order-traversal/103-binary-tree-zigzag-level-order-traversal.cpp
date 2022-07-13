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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(!root)
            return res;
        queue<TreeNode *> q;
        q.push(root);
        int ct=0;
        while(!q.empty()){
            int size=q.size();
            vector<int> tmp;
            while(size--){
                auto x=q.front();
                tmp.push_back(x->val);
                q.pop();
                if(x->left)
                    q.push(x->left);
                if(x->right)
                    q.push(x->right);
            }
            if(ct%2==0)
                res.push_back(tmp);
            else{
                reverse(tmp.begin(),tmp.end());
                res.push_back(tmp);
            }
            ct++;
        }
        return res;
    }
};