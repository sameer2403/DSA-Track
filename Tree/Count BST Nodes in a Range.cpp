
int solve(Tree* root, int lo, int hi) {
    if(!root) return 0;
    if(root->val==hi && root->val==lo)
    return 1;
    if(root->val <= hi && root->val >= lo){
      return 1+ solve(root->right, lo, hi)+solve(root->left, lo, hi);
    }
    else if(root->val<lo){
        return solve(root->right, lo, hi);
    }
    else{
        return solve(root->left, lo, hi);
    }

}