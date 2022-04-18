#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,c=0,key;
    cout<<"enter the no of test cases:";
    cin>>t;
    cout<<"enter the size of array:";
    cin>>n;
    int arr[n];
    while(t!=0)
    {
      cout<<"enter the elements of array:";
      for(int i=0;i<n;i++)
      cin>>arr[i];
      cout<<"Enter the key:";
      cin>>key;
      for(int i=0;i<n;i++)
      {
         for(int j=i;j<n;j++)
         {
                int diff=0;
              diff=abs(arr[i]-arr[j]);
                if(key==diff)
                {
                  c++;
                }

          }

       }
   cout<<c;
    t--;
}
return 0;
}
