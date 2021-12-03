/*Given two linked lists, your task is to complete the function makeUnion(), that returns the union of two linked lists. This union should include all the distinct elements only.

Example 1:

Input:
L1 = 9->6->4->2->3->8
L2 = 1->2->8->6->2
Output: 1 2 3 4 6 8 9
*/

struct Node* makeUnion(struct Node* head1, struct Node* head2)
{
    // code here
    set<int>s;
   while(head1!=NULL)
   {
       s.insert(head1->data);
       head1 = head1->next;
   }
   while(head2!=NULL)
   {
       s.insert(head2->data);
       head2 = head2->next;
   }
   Node*head = NULL;
   Node*tail = NULL;
   for(auto it = s.begin();it!=s.end();it++)
   {
       if(head==NULL)
       {
           head = new Node(*it);
           tail = head;
       }
       else
       {
           tail->next = new Node(*it);
           tail = tail->next;
       }
   }
   return head;
}

//Expected Time Complexity: O(N * Log(N))
//Expected Auxiliary Space: O(N)