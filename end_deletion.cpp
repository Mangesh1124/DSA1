#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;

};


int main()
{
  Node* one = new Node;
  Node* two = new Node;
  Node* three = new Node;
  Node* four = new Node;
  
  one->data = 1;
  one->next = two;
  two->data = 2;
  two->next = three;
  three->data = 3;
  three->next = four;
  four->data = 4;
  four->next = NULL;

 cout<<"OLD ELEMENTS ARE"<<endl<<endl<<endl;
 Node* head = one;
 while(head!=NULL)
 {
   cout<<"ELEMENTS :"<<head->data<<endl;
   head = head->next;  
 }
 cout<<endl<<endl;
cout<<"NEW LINKED LIST IS"<<endl<<endl<<endl;
Node* temp;
Node* head1 = one;
Node* head2;

while(head1!=NULL)
{
  if(head1->next->next == NULL)
  { head2 = head1->next;
    temp = head2;
    
    head1->next = NULL;

    delete temp;

  }
  cout<<"ELEMENTS :"<<head1->data<<endl;
  head1=head1->next;
}

return 0;
}