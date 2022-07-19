/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
vector<int> solve(Tree *root)
{
    queue<Tree *> q;
    vector<int> ans;
    q.push(root);
    bool l2r = true;
    while (!q.empty())
    {
        int n = q.size();
        int m = ans.size();
        for (int i = 0; i < n; i++)
        {
            Tree *node = q.front();
            ans.push_back(node->val);
            q.pop();
            if (node->left)
            {
                q.push(node->left);
            }
            if (node->right)
            {
                q.push(node->right);
            }
        }
        if (!l2r)
        {
            int start = m;
            int end = ans.size() - 1;
            while (start < end)
            {
                int temp = ans[start];
                ans[start++] = ans[end];
                ans[end--] = temp;
            }
        }
        l2r = !l2r;
    }
    return ans;
}