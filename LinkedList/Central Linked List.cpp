int solve(LLNode* node) {
    LLNode* curr=node;
    LLNode* slow= curr;
    LLNode* fast=curr;
    while( fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow->val;
}