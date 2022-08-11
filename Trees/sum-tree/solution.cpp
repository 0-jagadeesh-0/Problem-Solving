/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */

bool isLeaf(Tree *node)
{
    if (node->right == NULL && node->left == NULL)
        return true;
    return false;
}
int nodeVal(Tree *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return root->val;
}

bool solve(Tree *root)
{
    if (root == NULL || isLeaf(root))
    {
        return true;
    }
    if (nodeVal(root->left) + nodeVal(root->right) != root->val)
    {
        return false;
    }
    return solve(root->left) && solve(root->right);
}