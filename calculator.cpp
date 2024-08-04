#include<iostream>
#include<string.h>
using namespace std;
void help();
void again(int a,int b);
int main()
{

help();
return 0;
}
void help()
{ char asch[]="yes";
char mg[10];
cout<<"if you want to continue type yes and if you want to not continue then type no";
cin>>mg;
int c=strcmp(asch,mg);
if(c==0){
    int x,y;
    cout<<"enter the value of a and b";
    cin>>x>>y;
    again(x,y);
}
    
     else   cout<<"thank you";
}
    


void again(int a,int b)
{
    
    char op;
    cout<<"enter the operetor";
    cin>>op;
    switch(op)
    
    {
        case '+':
        cout<<a+b;
        break;
        case'-':
        cout<<a-b;
        break;
        case'*':
        cout<<a*b;
        break;
        case'/':
        cout<<a/b;
        break;
        default: 
        cout<<"error";
        }
        help();

    
    


    }



