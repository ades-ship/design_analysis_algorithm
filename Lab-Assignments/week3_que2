#include<iostream>
using namespace std;
void swap(int* i, int* j)
{
    int temp=*i;
    *i=*j;
    *j=temp;
}
int main()
{
    int t;
    cin>>t;
    while(t)
        {
        int n,comp=0,s=0;
         cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
          cin>>arr[i];
        for(int i=0; i<=n-2; i++)
        {
            int min=i;
            for(int j=i+1; j<=n-1; j++){
                comp++;
                if(arr[j]<arr[min])
                min=j;
            }
            s++;
            swap(&arr[i], &arr[min]);
        }

         cout<<"\nComparisons:"<<comp<<endl;
         cout<<"Shifting:"<<s<<endl;
        for(int i=0;i<n;i++)
           cout<<arr[i]<<" ";
        t--;
    }
}
