/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
void dfs(Tree *root, int &ans)
{
    if (root)
    {
        if (root->left == NULL && root->right != NULL || root->right == NULL && root->left != NULL)
        {
            ans++;
        }
        dfs(root->left, ans);
        dfs(root->right, ans);
    }
}
int solve(Tree *root)
{
    int ans = 0;
    dfs(root, ans);
    return ans;
}