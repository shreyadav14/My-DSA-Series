ListNode* Reverse(ListNode* head){
  Listnode* curr=head;
  ListNode* next=NULL;
  ListNode* prev=NULL;
while(curr!=NULL){
next=curr->next;
curr->next=prev;
prev=curr;
curr->next;
}
return prev;
}
