#include<bits/stdc++.h>
using namespace std;

int c=0;

void Merge(int A[], int low, int mid, int high)
{
    int i = low;
    int j = mid+1;
    int k = low;
    int B[high+1];
    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k++] = A[i++];
        } else
        {
            B[k++] = A[j++];
        }
        c++;
    }
    while (i <= mid)
    {
        B[k++] = A[i++];
    }
    while (j <= high)
    {
        B[k++] = A[j++];
    }
    for (i=low; i<=high; i++)
    {
        A[i] = B[i];
    }

}

void MergeSort(int A[],int l,int h)
{
    int mid;
    if(l<h)
    {
        mid=(l+h)/2;
        MergeSort(A,l,mid);
        MergeSort(A,mid+1,h);
        Merge(A,l,mid,h);
    }
}

int incount(int a[], int n)
{
    int count=0;
    for(int i=0; i<n-1; ++i)
        for(int j=i+1; j<n; ++j)
            if(a[i]>a[j])
            count++;
    return count;
}

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; ++i)
    {
        int n,inversion;
        cin>>n;
        int arr[n];
        for(int j=0; j<n; ++j)
            cin>>arr[j];
        inversion = incount(arr,n);
        MergeSort(arr,0,n-1);


        for(int j=0; j<n; ++j)
        {
            cout<<arr[j]<<" ";
        }

        cout<<endl<<"comparisons = "<<c<<endl;
        cout<<"inversions = "<<inversion<<endl;
    }
    return 0;
}
