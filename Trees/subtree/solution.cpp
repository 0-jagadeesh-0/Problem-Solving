/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
bool isSame(Tree *r1, Tree *r2)
{
    if (r1 == NULL && r2 == NULL)
    {
        return true;
    }
    if (r1 == NULL || r2 == NULL)
    {
        return false;
    }
    return r1->val == r2->val ? isSame(r1->left, r2->left) && isSame(r1->right, r2->right) : false;
}
bool solve(Tree *root, Tree *target)
{
    if (root == NULL && target == NULL)
    {
        return true;
    }
    if (root == NULL || target == NULL)
    {
        return false;
    }
    if (root->val == target->val)
    {
        return isSame(root, target);
    }
    return solve(root->left, target) || solve(root->right, target);
}