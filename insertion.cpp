#include<iostream>
using namespace std;

int main()
{
   int a[100]={1,2,3,4,5,6,7,};
   for(int i=0;i<7;i++)
   {
      cout<<a[i]<<" ";
   }
   cout<<"ENTER THE INDEX TO INSERT"<<endl;
   int n;
   cin>>n;
   cout<<"ENTER THE NO. TO INSET "<<endl;
   int m;
   cin>>m;

   for(int i=7;i>n;i--)
   {
      a[i]=a[i-1];

   }
   a[n]=m;
   cout<<"SORTED ARRAY IS "<<endl;
      for(int i=0;i<=7;i++)
   {
      cout<<a[i]<<" ";
   }

}