/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode *solve(LLNode *node)
{
    LLNode *curr = node;
    LLNode *q = NULL;
    LLNode *r = NULL;
    while (curr != NULL)
    {
        r = q;
        q = curr;
        curr = curr->next;
        q->next = r;
    }

    return q;
}