/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */

bool solve(Tree *root0, Tree *root1)
{
    if (root0 == NULL && root1 == NULL)
    {
        return true;
    }
    else if (root0 && root1)
    {
        if (root0->val != root1->val)
        {
            return false;
        }
        return solve(root0->left, root1->left) && solve(root0->right, root1->right);
    }
    else
    {
        return false;
    }
}