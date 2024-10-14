#include<iostream>
using namespace std;

class Node
{ public:
  int data;
  Node* next;

};

int main()
{

Node* one = new Node;
Node* two = new Node;
Node* three = new Node;


one->data = 12;
one->next = two;
two->data = 23;
two->next = three;
three->data = 45;
three->next = NULL;

Node* head = one;

while(head!=NULL)

{
    cout<<"ELEMENTS :"<<head->data<<endl;
    head = head->next;
}
Node* head1 = one;
Node* temp = head1;
head1 = head1->next;
delete temp;// it deletes the memory and address of the node where it is pointing 
cout<<"ELEMENTS AFTER DELETING ARE"<<endl;
while(head1!=NULL)

{
    cout<<"ELEMENTS :"<<head1->data<<endl;
    head1 = head1->next;
}

return 0;

}
