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

    one->data = 1;
    one->next = two;
    two->data = 2;
    two->next = three;
    three->data = 3;
    three->next = one;
    
    Node* addr=one;
   do
   {
     cout<<" ELEMENTS OF LINKED LIST ARE "<<addr->data<<endl;
     addr=addr->next;
    
   }
     while (addr!=one);
   




}