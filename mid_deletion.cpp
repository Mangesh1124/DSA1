#include<iostream>
using namespace std;

class Node{
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


    one->data = 5;
    one->next = two;
    two->data = 2;
    two->next = three;
    three->data = 9;
    three->next = four;
    four->data = 10;
    four->next = NULL;


    Node* head = one;

    while(head!=NULL)
    {
        cout<<"ELEMENTS: "<<head->data<<endl;
        head = head->next;

    }
    int n;
    cout<<"ENTER THE INDEX WHICH YOU WANT TO DELETE"<<endl;
    cin>>n;
    int i = 0;
    Node* head1 = one;
    Node* temp ;
    Node*  head2;

    while(head1!=NULL)
    {
        if(i == n)
        {
            temp = head1;
            head1 = head1->next;
            // head2 = head1->next;
            // head1 = head2;
            delete temp;
       }

       else
       {
        cout<<"ELEMENTS:"<<head1->data<<endl;
        head1 = head1->next;
       }
       i++;
        
    }   
    return 0;

}
     
       
            








   

