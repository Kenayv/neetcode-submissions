class Solution {
public:
    bool isValidBST(TreeNode* root) 
    {
        if (root->right && root->left)
        {
            return dfs(root->right, root->val + 1, INT32_MAX) && dfs(root->left, INT32_MIN, root->val - 1);
        }
        else if (root->right)
        {
            return dfs(root->right, root->val + 1, INT32_MAX);
        }
        else if (root->left)
        {
            return dfs(root->left, INT32_MIN, root->val - 1);
        }
        
        return true;
    }

    bool dfs(TreeNode* root, int minVal, int maxVal)
    {
        if (!root) return true;
        if (root->val < minVal || root->val > maxVal) return false;
        if (root->right && root->left && root->left->val >= root->right->val) return false;

        return dfs(root->right, root->val +1, maxVal) && dfs(root->left, minVal, root->val -1);
    }
};
