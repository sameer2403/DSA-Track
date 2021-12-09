/*
Input: 
              +
           /     \
          *       -
        /  \    /   \
       5    4  100  20 

Output: 100

Explanation:
((5 * 4) + (100 - 20)) = 100
*/

int evalTree(node* root) {
        // Your code here
          if(root==NULL){
           return 0;
       }
       int lv=evalTree(root->left);
       int rv=evalTree(root->right);
       
       if(root->data=="*") return lv*rv;
       else if(root->data=="+") return lv+rv;
       else if(root->data=="/") return lv/rv;
       else if(root->data=="-") return lv-rv;
       else return stoi(root->data);// if(r->left==NULL && r->right==NULL)
    }