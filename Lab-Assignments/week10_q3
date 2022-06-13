#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>sol;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        sol.push_back(a);
    }
    int flag=0;
    for(int i=0;i<n;i++)
    {
       int c=count(sol.begin(),sol.end(),sol[i]);
         if(c>n/2)
         {
             flag=1;
             break;
         }
    }
    double median=0;
    if(flag==1)
      {
           cout<<"YES"<<endl;
         if(n%2==0)
          {
              median = (float)(sol[n/2] + sol[n/2-1])/2;
          }
         else
             median = sol[n/2];

         cout<<median;
      }
      else
        cout<<"NO";
   
      return 0;
}
