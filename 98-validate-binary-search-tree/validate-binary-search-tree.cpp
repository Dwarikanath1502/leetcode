class Solution {
    bool isBST(TreeNode* root, long long min, long long max){
        if (root == nullptr) {
            return true;
        }
        if (root->val <= min || root->val >= max) {
            return false;
        }
        return isBST(root->left, min, root->val) 
        && isBST(root->right, root->val, max);
    }
public:
    bool isValidBST(TreeNode* root) {
        return isBST(root, LLONG_MIN, LLONG_MAX);
    }
};
