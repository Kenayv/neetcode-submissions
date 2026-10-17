
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) 
    {
        if (!root) return {};

        vector<vector<int>> result;
        queue<TreeNode*> nodeQ;
        
        nodeQ.push(root);

        int i = 0;
        while(!nodeQ.empty())
        {
            vector<TreeNode*> currentOrder;
            result.push_back({});

            while (!nodeQ.empty())
            {
                TreeNode* t = nodeQ.front();
                currentOrder.push_back(t);
                result[i].push_back(t->val);

                nodeQ.pop();
            }

            for (TreeNode* t : currentOrder)
            {
                if (t->left) nodeQ.push(t->left);
                if (t->right) nodeQ.push(t->right);
            }

            i++;
        }
        return result;
    }
};
