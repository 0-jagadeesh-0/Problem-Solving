/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */

int sum(Tree *node)
{
    if (node == NULL)
    {
        return 0;
    }
    return node->val + sum(node->left) + sum(node->right);
}

int count(Tree *node)
{
    if (node == NULL)
    {
        return 0;
    }
    return 1 + count(node->left) + count(node->right);
}

double solve(Tree *root)
{
    if (root == NULL)
    {
        return 0;
    }
    double k = (double)(sum(root)) / (double)(count(root));
    return max(k, max(solve(root->left), solve(root->right)));
}