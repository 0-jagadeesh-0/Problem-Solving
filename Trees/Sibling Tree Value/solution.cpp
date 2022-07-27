int solve(Tree *root, int k)
{
    queue<Tree *> q;
    q.push(root);
    while (!q.empty())
    {
        int n = q.size();
        for (int i = 0; i < n; i++)
        {
            Tree *node = q.front();
            if (node->left)
            {
                if (node->left->val == k)
                    return node->right->val;
                q.push(node->left);
            }
            if (node->right)
            {
                if (node->right->val == k)
                    return node->left->val;
                q.push(node->right);
            }
            q.pop();
        }
    }
    return 0;
}