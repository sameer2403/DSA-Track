/*Given Pointer/Reference to the head of the linked list, the task is to Sort the given linked list using Merge Sort.
Note: If the length of linked list is odd, then the extra node should go in the first list while splitting.*/




Node* listmid(Node *head)
   {   
       Node *slow=new Node(0),*fast=head;
       slow->next=head;
       while(fast!=NULL && fast->next !=NULL )
       {
           slow=slow->next;
           fast=fast->next->next;
       }
       return slow;
   }
   Node * merge(Node* a, Node * b)
   {
       if(a==NULL) return b;
       if(b==NULL) return b;
       Node* temp=new Node(-1);
       Node * head=temp;
       while(a!=NULL && b!=NULL)
       {
           if(a->data <b->data){
               temp->next=a;
               a=a->next;
               temp=temp->next;
               temp->next=NULL;
           }
           else {
               temp->next=b;
               temp=temp->next;
               b=b->next;
               temp->next=NULL;
           }
       }
       if(a!=NULL) temp->next=a;
       if(b!=NULL) temp->next=b;
       return head->next;
   }
   Node* mergesort( Node * head)
   {
       if(head==NULL || head->next==NULL) return head;
       Node * mid=listmid(head);
       Node * head2=mid->next;
       mid->next=NULL;
       return merge(mergesort(head),mergesort(head2));
   }
    Node* mergeSort(Node* head) {
        // your code here
       
       return mergesort(head);
    }

    //Expected Time Complexity: O(N*Log(N))
   //Expected Auxiliary Space: O(N)
