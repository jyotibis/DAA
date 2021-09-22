/*Given an unsorted array of integers, design an algorithm and a program to sort the array using
insertion sort. Your program should be able to find number of comparisons and shifts ( shifts total
number of times the array elements are shifted from their place) required for sorting the array.
*/
#include<stdio.h>
void insertsort(int a [],int n)
{
    int count=0;
    int shift =0;
   for(int i=1;i<n;i++)
   {
      int temp = a[i];
    int  j=i-1;
       while(j>=0&&a[j]>temp)
       {
           a[j+1]=a[j];
           j--;
           count++;
           shift++;
       }
       shift++;
       a[j+1]=temp;
   }
   printf(" comparison = %d ",count);
   printf("\n");
   printf("  shift = %d ",shift);
}
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
       int n;
       scanf("%d",&n);
       int a[n];
       for(int i=0;i<n;i++)
       {
          scanf("%d",&a[i]);
       }
       insertsort(a,n);
   }
}
