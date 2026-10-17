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
    int i = 0;
    bool isBalanced(TreeNode* root) 
    {
        vector<int> balHeight = {1,0};

        return (dfs(root, balHeight)[0] == 1);
    }

    vector<int> dfs(TreeNode* node, vector<int>& balHeight)
    {
        if(!node) return {1,0};
        
        
        vector<int> left = dfs(node->left, balHeight);
        vector<int> right = dfs(node->right, balHeight);

        bool balanced = (
            left[0] != 0 &&
            right[0] != 0 &&
            abs(left[1] - right[1]) <= 1
          );

        int height = 1 + max(left[1], right[1]);

        return {balanced, height};
        
        
    }
};
