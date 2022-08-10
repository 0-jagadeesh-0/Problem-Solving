/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
int solve(Tree *root)
{
    if (root == NULL)
    {
        return 0;
    }
    queue<Tree *> q;
    q.push(root);
    int sum = 0;
    while (!q.empty())
    {
        int n = q.size();
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            Tree *node = q.front();
            ans += node->val;
            if (node->left)
            {
                q.push(node->left);
            }
            if (node->right)
            {
                sum += node->right->val;
                q.push(node->right);
            }
            q.pop();
        }
        sum = ans;
    }
    return sum;
}