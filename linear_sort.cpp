#include<iostream>
using namespace std;

int main()

{
    // THIS IS LINEAR SEARCH
    int a[27]={22,34,65,75,12,45,76,89,9,2,312,45,76};
    cout<<"ENTER THE NO SEARCH"<<endl;
    int m;
    cin>>m;
    int count=0;
    for(int i=0;i<14;i++)
    {
        if(a[i]==m)
        {
            cout<<"ELEMENT FOUND AT INDEX: "<<" "<<i;
            count++;


        }
       
    }
    if(count==0)
    {
        cout<<"ELEMENT DOES NOT EXIST";
    }
}