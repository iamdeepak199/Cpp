#include<iostream>
#include "LinearSearch.h"
using namespace std;

void fastio(bool read = false) {
	if(read) {
		#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
		freopen("error.txt","w",stderr);
		#endif
	}
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	return;
}
class node{

public:
     int data;
     node*next;

     node(int val){
        data=val;
        next=NULL;
     }
};

void insertTail(node* &head,int val){
    node*n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;

    }
    temp->next=n;
}

void display(node*head){
node*temp=head;
while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
}
}
int main(){
    fastio(true);
    node*head=NULL;
    cout<<"Enter Values to add in LinkedList at Tail : "<<endl;
    insertTail(head,12);
    insertTail(head,11);
    insertTail(head,10);
    insertTail(head,13);
    display(head);
  }
