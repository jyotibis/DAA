/*I. Given a sorted array of positive integers containing few duplicate elements, design an algorithm
and implement it using a program to find whether the given key element is present in the array
or not. If present, then also find the number of copies of given key. (Time Complexity = O(log n))*/
#include<iostream>
using namespace std;
int binar_search(int a[],int n,int data)
{
    int l=1;
    int r=n;
    int count=0;
    while(l<r)
    {
        int num = l+r;
     int  mid =num /2;
        if(data == a[mid])
        {
            for(int i=l;i<mid;i++)
            {
                if(a[i]==data)
                {
                    count++;
                }
            }
            for(int i=mid;i<=r;i++)
            {
                if(a[i]==data)
                {
                    count++;
                }
            }
            return count;
        }
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
    cout<<"not found";
    else
        cout<<choice<<" - "<<result;
     }
    }

