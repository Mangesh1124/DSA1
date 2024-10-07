#include<iostream>
using namespace std;

int main()
{
    int a[20]={1,2,3,4,5,6,7,};
    int n;
    cout<<"ORIGINAL ARRAY IS"<<endl;
       for(int i=0;i<7;i++)
   {
    cout<<a[i]<<endl;
   }
    cout<<"ENTER THE INDEX WHICH WANT TO DELETE"<<endl;
    cin>>n;
    for(int i=n;i<6;i++)
    {
      a[i]=a[i+1];
    }
   for(int i=0;i<6;i++)
   {
    cout<<a[i]<<endl;
   }
}
    



