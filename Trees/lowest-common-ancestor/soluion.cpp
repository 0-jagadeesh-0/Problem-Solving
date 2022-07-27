Tree *help(Tree *root, int a, int b)
{
    if (root == NULL || root->val == a || root->val == b)
        return root;
    Tree *left = help(root->left, a, b);
    Tree *right = help(root->right, a, b);
    if (left == NULL)
        return right;
    else if (right == NULL)
        return left;
    else
        return root;
}

int solve(Tree *root, int a, int b)
{

    return help(root, a, b)->val;
}