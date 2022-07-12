LLNode *solve(Tree *root)
{
    queue<Tree *> q;
    LLNode *head = NULL;
    LLNode *ans = head;
    q.push(root);
    while (!q.empty())
    {
        Tree *k = q.front();
        q.pop();
        if (k->left)
        {
            q.push(k->left);
        }
        if (k->right)
        {
            q.push(k->right);
        }
        if (head == NULL)
        {
            head = new LLNode(k->val);
            ans = head;
        }
        else
        {
            head->next = new LLNode(k->val);
            head = head->next;
        }
    }
    return ans;
}