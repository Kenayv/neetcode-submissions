class Solution {
public:
    vector<int> res;

    vector<int> rightSideView(TreeNode* root) 
    {
        dfs(root, 0);

        return res;
    }

    void dfs(TreeNode* root, int depth)
    {
        if (!root) return;

        if (depth == res.size())
        {
            res.push_back(root->val);
        }

        dfs(root->right, depth + 1);
        dfs(root->left, depth + 1);
    }
};