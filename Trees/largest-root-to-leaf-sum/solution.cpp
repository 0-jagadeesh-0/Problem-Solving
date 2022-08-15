int solve(Tree *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int sum = 0;
    sum += root->val;
    int l = sum + solve(root->left);
    int r = sum + solve(root->right);
    return max(l, r);
}