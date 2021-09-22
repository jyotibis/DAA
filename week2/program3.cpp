#include<iostream>
using namespace std;
int main()
{
   int t;
   cin>>t;
   int count =0;
   while(t--)
   {
      int n;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
      }
      int key;
      cin>>key;
      for(int i=0;i<n;i++)
      {
          for(int j=i+1;j<n;j++)
          {
              if(a[i]>a[j])
              {
                  int temp = a[i];
                  a[i]=a[j];
                  a[j] = temp;
              }
          }
      }

      for(int i=0;i<n;i++)
      {
          for(int j=0;j<n;j++)
          {
             if(a[i]-a[j]==key)
             {
                 count++;
             }
          }
      }
      if(count>0)
        cout<<count;
      else
        cout<<"not found";
   }
}
