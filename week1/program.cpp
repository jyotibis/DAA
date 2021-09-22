#include<iostream>
using namespace std;
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
    for( int i=1;i<=n;i+=2)
    {
        if(choice==a[i])
            cout<<"present "<<i;
        else if (choice==a[i+1])
            cout<<"present  "<<i+1;
        else
            cout<<"NOT present";
     }
    }
}
