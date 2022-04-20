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
class BSTIterator {
    stack<TreeNode*> st;
    public:
        void pushAll(TreeNode *node) {
            while(node != NULL){
                st.push(node);
                node=node->left;   
            }
        }
        BSTIterator(TreeNode *root) {
            pushAll(root);
        }
        bool hasNext() {
            return !st.empty();
        }
        int next() {
            TreeNode *tmpNode = st.top();
            st.pop();
            pushAll(tmpNode->right);
            return tmpNode->val;
        }
    };
    
    /**
     * Your BSTIterator object will be instantiated and called as such:
     * BSTIterator* obj = new BSTIterator(root);
     * int param_1 = obj->next();
     * bool param_2 = obj->hasNext();
     */