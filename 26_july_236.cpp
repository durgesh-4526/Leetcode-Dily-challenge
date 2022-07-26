/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *    int val;
 *    TreeNode * left;
 *    TreeNode * right;
 *    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 *};
 */
class Solution
{
    public:
        TreeNode* lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
        {
            if(!root)return NULL;
            if (root->val == p->val || root->val == q->val) return root;
            TreeNode *L = lowestCommonAncestor(root->left, p, q);
            TreeNode *R = lowestCommonAncestor(root->right, p, q);
            if (L && R) return root;
            if (L) return L;
            if (R) return R;
            return NULL;
        }
};
