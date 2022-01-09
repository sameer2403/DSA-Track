/*
Input:
            10
          /    \
        20      30
       /  \         
     40    60      

Output: 60
*/

int getLevelDiff(Node *root)
    {
        //Your code here
       if(root==NULL)
       return 0;
       
       return root->data - getLevelDiff(root->left) -getLevelDiff(root->right);
    }