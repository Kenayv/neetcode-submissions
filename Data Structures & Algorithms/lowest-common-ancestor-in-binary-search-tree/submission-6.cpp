
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q)
    {
        TreeNode* left = p->val < q->val ? p : q;
        TreeNode* right = p->val < q->val ? q : p;

        return dfs(root, left, right);
    }

    TreeNode* dfs(TreeNode* root, TreeNode* left, TreeNode* right)
    {
        if (left->val < root->val && right->val < root->val) return dfs(root->left, left, right);
        if (left->val > root->val && right->val > root->val) return dfs(root->right, left, right);

        return root;
    }
};
