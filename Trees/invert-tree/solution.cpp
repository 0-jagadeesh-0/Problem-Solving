/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */

void swap(Tree *root)
{
    if (root)
    {
        Tree *k = root;
        Tree *l = NULL;
        Tree *r = NULL;
        if (root->left)
        {
            l = root->left;
            swap(root->left);
        }
        if (root->right)
        {
            r = root->right;
            swap(root->right);
        }
        k->left = r;
        k->right = l;
    }
}
Tree *solve(Tree *root)
{
    swap(root);
    return root;
}