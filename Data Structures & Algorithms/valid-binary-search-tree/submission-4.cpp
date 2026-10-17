
class Solution {
public:
    bool isValidBST(TreeNode* root) 
    {
        return dfs(root, INT32_MIN, INT32_MAX);
    }

    bool dfs(TreeNode* root, int minVal, int maxVal)
    {
        if (!root) return true;
        if (root->val < minVal || root->val > maxVal) return false;

        return dfs(root->right, root->val +1, maxVal) &&
               dfs(root->left, minVal, root->val -1);
    }
};
