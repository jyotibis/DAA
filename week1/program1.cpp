#include<iostream>
using namespace std;
int binar_search(int a[],int n,int data)
{
    int l=1;
    int r=n;
    while(l<r)
    {
        int num = l+r;
     int  mid =num /2;
        if(data == a[mid])
            return mid;
        else if(data< a[mid])
            r = mid-1;
        else
        l=mid+1;
    }
    return -1;
}
int main()
{
    int t;
    cin>>t;
      while(t--)
    {
    int n;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int choice;
    cin>>choice;
   int result = binar_search(a,n,choice);
   if(result== -1)
    cout<<"NOT present";
    else
        cout<<" Present "<<result;
     }
    }
