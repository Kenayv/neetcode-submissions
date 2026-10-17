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

class Solution 
{
public:
    int result = 0;

    int goodNodes(TreeNode* root) 
    {
        if (!root) return 0;

        dfs(root, root->val);

        return result;
    }

    void dfs(TreeNode* root, int maxVal)
    {
        if (!root) return;

        if (root->val >= maxVal)
        {
            result++;
            maxVal = root->val;
        }

        dfs(root->left, maxVal);
        dfs(root->right, maxVal);
    }
};
