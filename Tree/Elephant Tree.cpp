int dfs(Tree *root)
{
    int sum = 0;
    if (!root)
        return 0;
    sum += dfs(root->left) + dfs(root->right);
    root->val += sum;
    return root->val;
}
Tree *solve(Tree *root)
{
    dfs(root);
    return root;
}