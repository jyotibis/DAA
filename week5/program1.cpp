#include<bits/stdc++.h>
using namespace std;
int main()
{
    string ar;
    getline(cin,ar);
   int count[256];
for( int i=0;i!=256;++i)
{
    count[i] = 0;
}
for(int i=0;ar[i]!='\0';i++)
{
    count[ar[i]] = count[ar[i]] + 1;
           if(count[ar[i]]>1)
            cout<< ar[i]<<"="<<count[ar[i]];
}
}
