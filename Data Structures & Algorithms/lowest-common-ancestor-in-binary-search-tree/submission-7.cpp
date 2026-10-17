class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* left, TreeNode* right)
    {
        if (left->val < root->val && right->val < root->val)
            return lowestCommonAncestor(root->left, left, right);
        if (left->val > root->val && right->val > root->val) 
            return lowestCommonAncestor(root->right, left, right);

        return root;
    }
};