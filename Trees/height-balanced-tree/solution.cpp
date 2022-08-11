/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */

int height(Tree *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int left = height(root->left);
    int right = height(root->right);
    return max(left, right) + 1;
}

bool solve(Tree *root)
{
    if (root == NULL)
    {
        return true;
    }
    if (abs(height(root->left) - height(root->right)) > 1)
    {
        return false;
    }
    return solve(root->left) && solve(root->right);
}