int solve(Tree *root, int lo, int hi)
{
    if (root == NULL)
    {
        return 0;
    }
    return root->val >= lo && root->val <= hi ? 1 + solve(root->left, lo, hi) + solve(root->right, lo, hi) : solve(root->left, lo, hi) + solve(root->right, lo, hi);
}