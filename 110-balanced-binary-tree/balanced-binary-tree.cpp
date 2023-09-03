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

int checkBalanced(TreeNode* root){
    if(root == NULL){
        return 0;
    }
    // find left height
    int lheight = checkBalanced(root->left);
    if(lheight == -1){
        return -1;
    }
    int rheight = checkBalanced(root->right);
    if(rheight == -1){
        return -1;
    }

    if(abs(lheight - rheight) > 1){
        return -1;
    }

    // it return the max height of the4 tree 
    return max(lheight, rheight) + 1;
}
   
public:
    bool isBalanced(TreeNode* root) {
      if(checkBalanced(root) == -1){
          return false;
      }
      return true;
    }
};