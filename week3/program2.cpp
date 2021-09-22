/*Given an unsorted array of integers, design an algorithm and implement a program to sort this
array using selection sort. Your program should also find number of comparisons and number of
swaps required*/
#include<iostream>
using namespace std;
void selectionsort(int a[],int n)
{
    int comp =0;
    for(int i=0;i<n;i++)
    {
        int min =i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min = j;
            }
            comp++;
        }
            if(min!=i)
            {
                swap(a[i],a[min]);
            }
    }
    cout<<"comparsion = "<<comp<<endl;
    cout<<" swaps = "<<n-1;
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
       for(int i=0;i<n;i++)
       {
          cin>>a[i];
       }
       selectionsort(a,n);
   }
}
