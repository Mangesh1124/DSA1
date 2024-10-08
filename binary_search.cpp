#include<iostream>
using namespace std;
int binary_srch(int a[]);
int main()
{
    // LINEAR SEARCH
    int a[20]={1,2,3,4,5,6,7,8,9,10};
    int size=9;

int k= binary_srch(a);
cout<<k;
 
}
int binary_srch(int a[])
{
    int mid;
    int low=0;
    int high=9;
    cout<<"ENTER THE NO TO SEARCH"<<endl;
    int n;
    cin>>n;

    while(low<=high)
    {
        mid=(low+high)/2;

        if(a[mid]==n)
        {
            return mid;
        }
        else if(a[mid]<n)
        {
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }

}