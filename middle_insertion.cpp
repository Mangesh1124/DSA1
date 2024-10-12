#include<iostream>
using namespace std;

class Node
{  public:
    int data;
    Node* next;

};

int main()
{
  Node* one = new Node;
  Node* two = new Node;
  Node* three = new Node;
  one->data=1;
  one->next=two;
  two->data=2;
  two->next=three;
  three->data=3;
  three->next=NULL;
  Node* head = one;
  cout<<"LINKED LIST BEFORE INSERTING BETWEEN THE IT"<<endl;
  while(head!=NULL)
  {
    cout<<head->data<<endl;
    head=head->next; 
  }
  cout<<"ENTER THE INDEX TO INSERT"<<endl;
  int n;
  cin>>n;
  int i = 0;
  Node* head1 = one;
  cout<<"ENTER THE DATA FOR THE INSERTED NODE"<<endl;
  int m;
  cin>>m;

  while(i<n)
  {
    head1=head1->next;
    i++;
  }

  Node* ptr1 = new Node;
  
    ptr1->data = m;
    ptr1->next = three;
    head1->next = ptr1;
 
   
  Node* head2 = one;

    while(head2!=NULL)
  {
    cout<<head2->data<<endl;
    head2=head2->next; 
  }
  
  


  return 0;

}

  
