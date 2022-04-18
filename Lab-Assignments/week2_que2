
#include<iostream>
using namespace std;
int main()
{
    int n,t;
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

      for(int i=0;i<n;i++)
      {

          int sum=0;
         for(int j=1;j<n;j++)
         {
            sum=arr[i]+arr[j];
           for(int k=0;k<n;k++)
          {
              if(arr[k]==sum)
               {
                cout<<i<<" "<<j<<" "<<k;
                 return 0;
               }

          }

       }

    }
    cout<<"No sequence found";
    t--;
}
return 0;
}
