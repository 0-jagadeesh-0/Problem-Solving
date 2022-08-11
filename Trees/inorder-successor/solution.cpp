void help(Tree *root, vector<int> &v)
{
    if (root)
    {
        help(root->left, v);
        v.push_back(root->val);
        help(root->right, v);
    }
}

int solve(Tree *root, int t)
{
    vector<int> v;
    help(root, v);
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == t)
        {
            return v[i + 1];
        }
    }
    return -1;
}