/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
void dfs(Tree *root, vector<int> &ans)
{
    if (root)
    {
        dfs(root->left, ans);
        ans.push_back(root->val);
        dfs(root->right, ans);
    }
}
bool solve(Tree *root)
{
    vector<int> ans;
    dfs(root, ans);
    int start = 0;
    int end = ans.size() - 1;
    while (start <= end)
    {
        if (ans[start++] != ans[end--])
            return false;
    }
    return true;
}