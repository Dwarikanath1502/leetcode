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
private:
//helper method to store all left node
    void helper(TreeNode* root){
        while(root){
            st.push(root);
            root = root->left;
        }
    }
public:
// constructor storing all left node to stack
    BSTIterator(TreeNode* root) {
        helper(root);
    }
    // method returning next if there is next element
    int next() {
        if(st.empty()){
            return -1;
        }
        TreeNode* node = st.top();
        st.pop();
        helper(node->right);
        return node->val;
    }
    // check whether next element exists
    bool hasNext() {
       return !st.empty();
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */