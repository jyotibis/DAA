#include<bits/stdc++.h>
using namespace std;
void intersect(int a[],int b[],int m,int n)
{
   int i=0,j=0;
   while(i<m && j<n)
   {
       if(a[i]<b[j])
        i++;
       else if(b[j]<a[i])
        j++;
       else
       {
           cout<<b[j++]<<" ";
           i++;
       }
   }
}
int main()
{
    int m ;
    cin>>m;
    int a[m];
    for(int i=0;i<m;i++)
        cin>>a[i];
    int n;
    cin>>n;
    int b[n];
      for(int i=0;i<n;i++)
        cin>>b[i];
    intersect(a,b,m,n);
}
