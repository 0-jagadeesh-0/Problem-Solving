/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
bool solve(Tree *root, int val)
{
    if (root)
    {
        if (root->val == val)
        {
            return true;
        }
        if (root->val > val)
        {
            return solve(root->left, val);
        }
        else
        {
            return solve(root->right, val);
        }
    }
    return false;
}