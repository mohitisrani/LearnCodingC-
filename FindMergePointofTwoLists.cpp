*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
int FindMergeNode(Node *headA, Node *headB)
{
    // Complete this function
    // Do not write the main method. 
  
    Node *c1=headA, *c2=headB;
    while(c1!=c2){
        if(c1==NULL){
            c1=headB;
        }else
            c1=c1->next;
        if(c2==NULL){
            c2=headA;
        }
        else c2=c2->next;
        }
    return c1->data;    
    
    
    
    
    //Method using size of linkedlist
    
    
    /*  int sz1=1,sz2=1;
    Node* temp1=headA, *temp2=headB;
    while(temp1->next!=NULL){
        temp1=temp1->next;
        sz1++;}
    while(temp2->next!=NULL){
        temp2=temp2->next;
        sz2++;}
    if(sz2>sz1){
        temp1=headB;temp2=headA;
        sz1=sz2-sz1;
    }else{
        temp1=headA;temp2=headB;
        sz1=sz1-sz2;
    }
    while(sz1!=0){
        temp1=temp1->next;
        sz1--;
    }
    while(temp1!=NULL){
        if(temp1==temp2){return temp1->data;}
        temp1=temp1->next;
        temp2=temp2->next;
    }
    return 0;*/
    
}
