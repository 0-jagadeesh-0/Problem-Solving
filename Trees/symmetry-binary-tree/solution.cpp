/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */

int help(Tree *r1, Tree *r2)
{
    if (r1 == NULL && r2 == NULL)
    {
        return true;
    }
    else if (r1 == NULL || r2 == NULL)
    {
        return false;
    }
    else
    {
        return r1->val == r2->val && help(r1->left, r2->right) && help(r1->right, r2->left);
    }
}

bool solve(Tree *root)
{
    if (root == NULL)
        return true;
    return help(root->left, root->right);
}