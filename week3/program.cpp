/*Given an unsorted array of positive integers, design an algorithm and implement it using a
program to find whether there are any duplicate elements in the array or not. (use sorting) (Time
Complexity = O(n log n)*/
#include<iostream>
using namespace std;
void merge(int a[],int lb,int mid,int ub)
{
    int i=lb;
    int j= mid+1;
    int k = lb;
    int b[k];
    while(i<=mid&&j<=ub)
    {
        if(a[i] <= a[j])
        {
            b[k]=a[i];
            i++;
        }
        else
        {
            b[k] = a[j];
            j++;
        }
        k++;
    }
    if(i>mid)
    {
        while(j<= ub)
        {
            b[k]=a[j];
            j++;
            k++;
        }
    }
    else
    {
        while(i<=mid)
        {
        b[k] = a[i];
            i++;
            k++;
        }
    }
    for(k=lb;k<=ub;k++)
    {
        a[k] =b[k];
    }
}
void mergesort(int a[],int lb,int ub)
{
    int k = lb+ub;
    if(lb<ub)
    {
        int mid = k/2;
        mergesort(a,lb,mid);
        mergesort(a,mid+1,ub);
        merge(a,lb,mid,ub);
    }
}
int main()
{
    int t;
    int count =0;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int lb =0;
        int ub = n-1;
        mergesort(a,lb,ub);
         for(int i=0;i<n;i++)
        {
            if(a[i]==a[i+1])
                count=1
        }
        if(count==1)
            cout<<"YES";
        else
            cout<<"NO";
    }
}
