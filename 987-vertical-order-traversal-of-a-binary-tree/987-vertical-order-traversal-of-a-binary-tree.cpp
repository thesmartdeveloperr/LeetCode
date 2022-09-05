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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> res;
        queue<pair<TreeNode *,pair<int,int>>> q;
        q.push({root,{0,0}});
        map<int,map<int,multiset<int>>> mp;
        while(q.size()){
            int sz=q.size();
            while(sz--){
                auto tp=q.front();
                TreeNode *root=tp.first;
                int vertical=tp.second.first;
                int level=tp.second.second;
                mp[vertical][level].insert(root->val);
                if(root->left){
                    q.push({root->left,{vertical-1,level+1}});
                }
                if(root->right){
                    q.push({root->right,{vertical+1,level+1}});
                }
                q.pop();
            }
        }
        for(auto q:mp){
            vector<int> col;
            for(auto p:q.second)          col.insert(col.end(),p.second.begin(),p.second.end());
            res.push_back(col);
        }
        return res;
    }
};