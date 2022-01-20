int Leaf(Tree *node)
{
    if (node == nullptr)
        return 0;
    if (node->left == nullptr and node->right == nullptr)
        return 1;
    else
        return Leaf(node->left) + Leaf(node->right);
}

int NonLeaf(Tree *root)
{
    if (root == nullptr || (root->left == nullptr && root->right == nullptr))
        return 0;
    return 1 + NonLeaf(root->left) + NonLeaf(root->right);
}
vector<int> solve(Tree *root)
{

    // return {Leaf(root),NonLeaf(root)};
    vector<int> v;
    v.push_back(Leaf(root));
    v.push_back(NonLeaf(root));
    return v;
}