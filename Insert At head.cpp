#include <iostream>
using namespace std;

class node{
public:
  int data;
  node*next;
  
  node(int val){
  data=val;
  next=NULL;
  }
};

void insertAtHead(node* &head,int val){

   node*n=new node(val);
   n->next=head;
   head=n;
}

void display(node *head){
  node*temp=head;
  while(temp!=NULL){
  cout<<temp->data<<" ";
  temp=temp->next;
  }
  }
int main() {
  node*head=NULL;
  cout<<"Insert At Head"<<endl;
  insertAtHead(head,10);
  insertAtHead(head,11);
  insertAtHead(head,12);
  insertAtHead(head,13);
  insertAtHead(head,14);
  display(head);
  
  
  
}
