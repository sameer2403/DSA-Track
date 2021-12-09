/*
Input:
K = 3
        3
       /
      2
       \
        1
      /  \
     5    3
Output: 5 3
*/

void KdistanceUtil(struct Node *root,int k,vector<int> &res){
    if(root==NULL) return;
      if(k==0)
  res.push_back(root->data);
  else{
      KdistanceUtil(root->left,k-1,res);
      KdistanceUtil(root->right,k-1,res);
  }
  }
// function should print the nodes at k distance from root
vector<int> Kdistance(struct Node *root, int k)
{
  // Your code here
  
  vector<int> res;
  KdistanceUtil(root,k,res);
  
  return res;
}