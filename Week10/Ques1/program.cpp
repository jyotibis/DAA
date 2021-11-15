#include<bits/stdc++.h>
using namespace std;

void activity_selection(vector <int>a ,vector<int>b,int n)
{  vector<pair<int,int>>activity;
int i,t;
 for(i=0;i<n;i++)
    {
      activity.push_back(make_pair(b[i],a[i]));
    }
    sort(activity.begin(), activity.end());
    int countt =0;
    int current_End=-1;
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        if(activity[i].second>current_End){
            t=i+1;
            ans.push_back(t);
            countt++;
            current_End=activity[i].first;

        }
    }
    cout<<"No. of non-conflicting activities: "<<countt<<endl;
    cout<<"Selected task numbers: ";
    for(i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    cout<<endl;

}
int main()
{

    int n,s,e,i;
    cin>>n;
    vector<int>a,b;
    for(i=0;i<n;i++)
    {
        cin>>s;
        a.push_back(s);
    }
    for(i=0;i<n;i++)
    {
        cin>>e;
        b.push_back(e);
    }
    activity_selection(a,b,n);


        return 0;
}