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
        if (root->right)
        {
            Tree *temp = root->right;
            if (temp->right == NULL && temp->left == NULL)
            {
                ans += temp->val;
            }
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