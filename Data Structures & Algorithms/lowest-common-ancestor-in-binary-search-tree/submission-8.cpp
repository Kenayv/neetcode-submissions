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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* left, TreeNode* right)
    {
        if (left->val < root->val && right->val < root->val)
            return lowestCommonAncestor(root->left, left, right);
        if (left->val > root->val && right->val > root->val) 
            return lowestCommonAncestor(root->right, left, right);

        return root;
    }
};