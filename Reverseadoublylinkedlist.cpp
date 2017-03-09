/*
   Reverse a doubly linked list, input list may also be empty
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* Reverse(Node* head)
{
    // Complete this function
    // Do not write the main method. 
    if(head==NULL || head->next==NULL)
    return head;
    
    Node *temp;
    while(head->next!=NULL){
        temp=head->next;
        head->next=head->prev;
        head->prev=temp;
        head=head->prev;
    }
        temp=head->next;
        head->next=head->prev;
        head->prev=temp;
        return head;
}
