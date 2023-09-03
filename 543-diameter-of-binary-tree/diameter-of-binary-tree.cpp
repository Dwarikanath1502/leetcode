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

int findDiameter(TreeNode* root, int& diameter){
    // base case
    if(!root){
        return 0;
    }
    // find left and right for each node, it will help to solve in O(N)
    int leftHeight = findDiameter(root->left, diameter);
    int rightHeight = findDiameter(root->right, diameter);

    // stroe diameter as sum of both side, which ever is max, store that
    diameter = max(diameter, (leftHeight + rightHeight));

    return max(leftHeight, rightHeight) + 1;
}


public:

    int diameterOfBinaryTree(TreeNode* root) {
      int diameter = 0;
      findDiameter(root, diameter);
      return diameter;
    }
};