/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> res;
        if(!root)
            return res;
        queue<Node *> q;
        q.push(root);
        while(q.size()){
            vector<int> tmp;
            int sz=q.size();
            while(sz--){
                auto tp=q.front();
                q.pop();
                int i=0;
                int n=tp->children.size();
                while(n--){
                    q.push(tp->children[i++]);
                }
                tmp.push_back(tp->val);
            }
            res.push_back(tmp);
        }
        return res;
    }
};