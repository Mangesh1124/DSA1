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

    one-> data = 23;
    one-> next = two;
    two-> data = 27;
    two-> next = three;
    three-> data = 12;
    three->next = NULL;

    Node* head = one;

    while(head!=NULL)
    {
        cout<<"ELEMENTS :"<<head->data<<endl;
        head=head->next;
    }
   
    Node* last = new Node;
    int m;
    cout<<"ENTER THE NO. TO INSERT AT LAST"<<endl;
    cin>>m;
    last->data = m;
    last->next = NULL;

    int i =0;
    cout<<"ENTER THE LAST INDEX OF YOUR LINKED LIST"<<endl;
    int n;
    cin>>n;
    Node* head1 = one;
    while(i<=n)
    {
        head1 = head1->next;
        i++;
        if(i==n)
        {
          head1->next = last;
        }
    }
    
    Node* head2 = one;
    while(head2!=NULL)
    {
        cout<<"ELEMENTS :"<<head2->data<<endl;
        head2 = head2->next;
    }





 return 0;    

}


