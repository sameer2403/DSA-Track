Node *getmid(Node *head)
{
    Node *slow, *fast;
    slow = fast = head;
    while (fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
Node *reverse(Node *head)
{
    Node *prev = NULL, *next = NULL, *curr = head;
    while (curr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
void reorderList(Node *head)
{
    // Your code here
    Node *mid = getmid(head);
    Node *p = mid->next;
    mid->next = NULL;

    Node *revp = reverse(p);
    Node *curr = head, *next;
    while (curr && revp)
    {
        next = curr->next;
        curr->next = revp;
        revp = revp->next;
        curr->next->next = next;
        curr = next;
    }
}