
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) 
    {
        if (root->val == p->val || root->val == q->val) return root;

        TreeNode* left = p->val < q->val ? p : q;
        TreeNode* right = p->val < q->val ? q : p;

   
        if (left->val < root->val && right->val > root->val) return root;
        if (left->val < root->val && right->val < root->val) return lowestCommonAncestor(root->left, p, q);
        if (left->val > root->val && right->val > root->val) return lowestCommonAncestor(root->right, p, q);

        std::cout << "chujnia\n";
        return nullptr;
    }
};
