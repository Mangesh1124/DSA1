#include<iostream>
using namespace std;

class Node
{   public:
    int data;
    Node* next;

};

int main()

{
    Node* nodePtr = new Node;

    nodePtr-> data = 10;
    nodePtr-> next = nullptr;
    cout<<"DATA  "<<nodePtr->data<<endl;
    delete nodePtr;
    return 0;
}