/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
void dfs(Tree *root, int level, vector<int> &ans)
{
    if (root)
    {
        if (ans.size() == level)
        {
            ans.push_back(root->val);
        }
        dfs(root->left, level + 1, ans);
        dfs(root->right, level + 1, ans);
    }
}
vector<int> solve(Tree *root)
{
    vector<int> ans;
    dfs(root, 0, ans);
    return ans;
}
