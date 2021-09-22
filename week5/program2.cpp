#include <bits/stdc++.h>
using namespace std;
void findPair(int arr[], int n, int target)
{
	sort(arr, arr + n);
	int low = 0;
	int high = n - 1;
    int count =1;
	while (low < high)
	{
		if (arr[low] + arr[high] == target)
		{
			cout<< arr[low] <<" "<< arr[high] <<",";
			count++;
		}
            (arr[low] + arr[high] < target)? low++: high--;
	}
    if(count==1)
	cout << "No Such pair Exist";
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
	int t;
	cin>>t;
	findPair(arr, n, t);

	return 0;
}
