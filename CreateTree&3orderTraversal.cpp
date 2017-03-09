#include<iostream>
#include<vector>
using namespace std;
//given tree
//101 1 3 102 2 8 104 6 7 103 -1 5 109 -1 -1 106 4 -1 107 -1 -1 108 -1 -1 105 -1 -1

struct Node{
int data;
Node *left=NULL;
Node *right=NULL;
};
void postorder(Node *root){
if(root->left!=NULL)postorder(root->left);
if(root->right!=NULL)postorder(root->right);
cout<<(root->data)<<" ";}

void preorder(Node *root){
cout<<(root->data)<<" ";
if(root->left!=NULL)preorder(root->left);
if(root->right!=NULL)preorder(root->right);
}

void inorder(Node *root){
if(root->left!=NULL)inorder(root->left);
cout<<(root->data)<<" ";
if(root->right!=NULL)inorder(root->right);
}

int main(){
int N,d,l,r;
cin>>N;
vector<Node *> arr;
for(int i=0;i<N;i++)
{
    Node *temp=new Node;
    //temp->data=i;
    arr.push_back(temp);
    cout<<temp<<endl;
}
for(int i=0;i<N;i++){
cin>>d>>l>>r;
arr[i]->data=d;
if(l!=-1)((arr[i])->left)=arr[l];
if(r!=-1)arr[i]->right=arr[r];
}
 preorder(arr[0]);
 cout<<endl;
 inorder(arr[0]);
 cout<<endl;
 postorder(arr[0]);
}

