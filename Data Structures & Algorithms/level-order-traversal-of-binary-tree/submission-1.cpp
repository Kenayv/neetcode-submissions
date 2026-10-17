
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) 
    {
        if (!root) return {};

        vector<vector<int>> result;
        queue<TreeNode*> nodeQ;
        
        nodeQ.push(root);

        while(!nodeQ.empty())
        {
            vector<int> currentOrder;

            int size = nodeQ.size();

            for (int i = 0; i < size; i++)
            {
                TreeNode* t = nodeQ.front();

                currentOrder.push_back(t->val);

                if (t->left) nodeQ.push(t->left);
                if (t->right) nodeQ.push(t->right);

                nodeQ.pop();
            }

            result.push_back(currentOrder);
        }
        return result;
    }
};

