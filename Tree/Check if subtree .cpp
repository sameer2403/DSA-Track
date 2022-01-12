 /*
 Input:
T:      1          S:   3
      /   \            /
     2     3          4
   /  \    /
  N    N  4
Output: 1 
Explanation: S is present in T
 */
 
 
 bool isSame(Node *t, Node *s)
    {
        if (!t && !s) return true;
        if (!t || !s) return false;
        if (t->data != s->data) return false;
        
        return isSame(t->left, s->left) && isSame(t->right, s->right);
        
    }
    bool isSubTree(Node* T, Node* S) 
    {
        // Your code here
         if(!T) return false;
        if (isSame(T,S)) return true;
        
        return isSubTree(T->left,S) || isSubTree(T->right,S);
        
    }