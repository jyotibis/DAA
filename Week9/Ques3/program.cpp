#include<bits/stdc++.h>
using namespace std;

void minSum(vector<int> arr)
{
    sort(arr.begin(), arr.end());
    vector<int>::iterator j;
    j = arr.begin();
    int result=0,sum=0;
    for(auto i=arr.begin(); i!=arr.end(); ++i)
    {
        sum = sum + *i;
        if(sum != *j)
            result += sum;
    }
    cout<<result<<endl;
}

int main()
{
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0; i<n; ++i)
    {
        int temp; 
        cin>>temp;
        arr.push_back(temp);
    }

    minSum(arr);
    return 0;
}