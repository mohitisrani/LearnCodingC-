/*
    Insert Node in a doubly sorted linked list 
    After each insertion, the list should be sorted
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* SortedInsert(Node *head,int data)
{

    Node *n=new Node;
    n->data=data;
    n->next=NULL;n->prev=NULL;
    if(head==NULL){return n;}
    
        if((head->data)>data){
        n->next=head;
        head->prev=n;
        return n;}
    
    Node *temp=head;

    while(temp->next!=NULL){
        if(temp->next->data>data){
            n->prev=temp;
            n->next=temp->next;
            temp->next=n;
            n->next->prev=n;
            return head;
        }
        temp=temp->next;           
        }
        temp->next=n;
        n->prev=temp;
    
    return head;
    
}
