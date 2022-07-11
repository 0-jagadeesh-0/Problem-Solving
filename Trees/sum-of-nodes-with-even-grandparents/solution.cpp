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
        if (root->val % 2 == 0)
        {
            if (root->left)
            {
                Tree *l = root->left;
                if (l->left)
                    ans += l->left->val;
                if (l->right)
                    ans += l->right->val;
            }
            if (root->right)
            {
                Tree *l = root->right;
                if (l->left)
                    ans += l->left->val;
                if (l->right)
                    ans += l->right->val;
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