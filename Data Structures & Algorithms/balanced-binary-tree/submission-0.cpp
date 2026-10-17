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
    bool isBalanced(TreeNode* root) 
    {
        return dfsBal(root)[0] == 1;
    }

    vector<int> dfsBal(TreeNode* root)
    {
        if (!root) return { 1,0 };

        vector<int> left = dfsBal(root->left);
        vector<int> right = dfsBal(root->right);

        if (left[0] == 0 || right[0] == 0) return { 0, 0 };
        if (abs(left[1] - right[1]) > 1) return { 0, 0 };

        int height = 1 + max(left[1], right[1]);

        return { 1, height };

    }
};
