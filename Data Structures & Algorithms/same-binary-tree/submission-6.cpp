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
    bool isSameTree(TreeNode* p, TreeNode* q) 
    {
        vector<char> pv, qv;
 
        return getTreeVector(p, pv) == getTreeVector(q, qv);;
    }

    vector<char> getTreeVector(TreeNode* root, vector<char>& v)
    {
        if(!root) return {};

        v.push_back(root->val);

        if(!root->left)
        {
            v.push_back('l');
        }
        if(!root->right)
        {
            v.push_back('r');
        }
    
        getTreeVector(root->left, v);
        getTreeVector(root->right, v);
        
        return v;
    }
};
