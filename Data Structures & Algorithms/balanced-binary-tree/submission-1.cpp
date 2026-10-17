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
        std::cout<<"i" << i++ << '\n';
        
        if(!node)
        {
            std::cout<< "no node\n";
            return {1,0};
        }
        

        vector<int> left = dfs(node->left, balHeight);
        vector<int> right = dfs(node->right, balHeight);

        std::cout<<"left bal | height: " <<left[0] <<" | "<< left[1] << '\n';
        std::cout<<"right bal | height: " <<right[0] <<" | "<< right[1] << '\n';

        if(abs(left[1] - right[1]) > 1 || left[0] == 0 || right[0] == 0)
        {
            std::cout<<"leftright unbalanced\n";
            balHeight[0] = 0;
            return {0,0};
        }

        return {1, 1 + max(left[1], right[1])};
        
        
    }
};
