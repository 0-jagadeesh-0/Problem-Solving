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
Tree *solve(LLNode *node)
{
    if (node == NULL)
        return NULL;
    Tree *root = new Tree(node->val);
    Tree *ans = root;
    node = node->next;
    while (node)
    {
        Tree *temp = new Tree(node->val);
        if (root->val <= node->val)
        {
            root->right = temp;
            root = temp;
        }
        else
        {
            root->left = temp;
            root = temp;
        }
        node = node->next;
    }
    return ans;
}