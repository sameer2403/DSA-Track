/*Input:
LinkedList1: 9->6->4->2->3->8
LinkedList2: 1->2->8->6
Output: 6 2 8
*/

 Node* findIntersection(Node* head1, Node* head2)
    {
        // code here
        // return the head of intersection list
        if(head1==NULL || head2==NULL) return NULL;
      unordered_set<int>s;
      Node* p1=head1;
      Node* p2=head2;
      while(p2!=NULL)
      {
          s.insert(p2->data);
          p2=p2->next;
      }
        Node* temp= new Node(0);
        Node* head= temp;
        
        while( p1!=NULL)
        {
            if(s.find(p1->data)!=s.end())
            {
                temp->next= new Node(p1->data);
                  temp=temp->next;
            }
         
                 p1=p1->next;
        }
        return head->next;
    }