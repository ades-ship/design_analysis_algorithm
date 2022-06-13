#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>activity;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        activity.push_back({x,y});
    }
    sort(activity.begin(),activity.end());
    int c=0,currEnd=-1;
    vector<int>sol;
    for(int i=0;i<n;i++)
    {
        int j=activity[i].second;
        if(j>=currEnd)
        {
            sol.push_back(i);
            c++;
            currEnd=activity[i].first;
        }
    }
    cout<<c<<"\n";
    for(int i=0;i<sol.size();i++)
       cout<<sol[i]+1<<" ";
    return 0;

}
