vector<int> solve(Tree *root)
{
    vector<int> ans;
    if (root == NULL)
        return ans;
    map<int, int> m;            // To store the line and corresponding value.
    queue<pair<Tree *, int>> q; // To store the node and line.
    q.push({root, 0});
    while (!q.empty())
    {
        auto k = q.front();
        Tree *node = k.first;
        int line = k.second;
        q.pop();
        if (m.find(line) == m.end())
        {
            m[line] = node->val;
        }

        if (node->left)
        {
            q.push({node->left, line - 1});
        }
        if (node->right)
        {
            q.push({node->right, line + 1});
        }
    }
    for (auto i : m)
    {
        ans.push_back(i.second);
    }
    return ans;
}