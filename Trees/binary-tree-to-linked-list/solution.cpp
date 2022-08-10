/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */

/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode *solve(Tree *root)
{
    LLNode *head = NULL;
    LLNode *ans;
    if (root == NULL)
    {
        return head;
    }
    stack<Tree *> s;
    Tree *curr = root;
    while (!s.empty() || curr)
    {
        while (curr)
        {
            s.push(curr);
            curr = curr->left;
        }
        curr = s.top();
        if (head == NULL)
        {
            head = new LLNode(s.top()->val);
            ans = head;
        }
        else
        {
            LLNode *temp = new LLNode(s.top()->val);
            head->next = temp;
            head = temp;
        }
        s.pop();
        curr = curr->right;
    }
    return ans;
}