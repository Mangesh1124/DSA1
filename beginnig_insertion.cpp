#include<iostream>
using namespace std;

class Node
{   public:
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

  Node* ptr = one;
  while(ptr!=NULL)
  {
    cout<<"elements :"<< ptr->data<<endl;
    ptr=ptr->next;
  }
  cout<<"INSERT THE NODE AT THE BEGINNING"<<endl;
  Node* new_node = new Node;
  new_node->data = 0;
  new_node->next = one;
  Node* ptr1 = new_node;
  cout<<"THUS INSERTED NODE IS"<<endl;

  while(ptr1!=NULL)
  {
    cout<<"elements are :"<<ptr1->data<<endl  ;
    ptr1=ptr1->next;
  }


}