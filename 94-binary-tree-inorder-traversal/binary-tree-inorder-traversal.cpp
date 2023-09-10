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
    vector<int> inorderTraversal(TreeNode* root) {
       // to return ans
       vector<int> ans;
       stack<TreeNode*> st;

       TreeNode* node = root;

        while(true){
            if(node != NULL){
                st.push(node);
                node = node->left;
            }
            else{
                // if stack gets empty;
                if(st.empty()){
                    break;
                }
                else{
                    node = st.top();
                    st.pop();

                    ans.push_back(node->val);
                    node = node->right;
                }
            }
        }
        return ans;
    }
};