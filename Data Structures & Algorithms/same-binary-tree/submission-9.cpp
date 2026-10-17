class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) 
    {
        queue<TreeNode*> q1;
        queue<TreeNode*> q2;

        q1.push(p);
        q2.push(q);

        while (!q1.empty() && !q2.empty())
        {
            for (int i = q1.size(); i > 0; i--)
            {
                TreeNode* pNode = q1.front(); q1.pop();
                TreeNode* qNode = q2.front(); q2.pop();

                if (!pNode && !qNode) continue;

                if (!pNode || !qNode || qNode->val != pNode->val) return false;

                q1.push(pNode->left);
                q1.push(pNode->right);
                q2.push(qNode->left);
                q2.push(qNode->right);

            }
        }
        return true;
    }
};