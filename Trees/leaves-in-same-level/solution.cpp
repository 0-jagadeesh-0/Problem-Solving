void dfs(Tree *root, vector<int> &v, int level)
{
    if (root)
    {
        if (root->left == NULL && root->right == NULL)
        {
            v.push_back(level);
        }
        dfs(root->left, v, level + 1);
        dfs(root->right, v, level + 1);
    }
}
bool solve(Tree *root)
{
    vector<int> v;
    dfs(root, v, 0);
    int n = v.size();
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] != v[i + 1])
        {
            return false;
        }
    }
    return true;
}