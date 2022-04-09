#include<iostream>
int comparsion=0;
using namespace std;
int binary_search(int arr[],int l,int r,int key)
{
    while(l<=r)
    {
    int mid=l+(r-l)/2;
     if(arr[mid]==key)  return mid;
    else if(arr[mid]<key) l=mid+1;
    else
     r=mid-1;
     comparsion++;
    }
     return -1;
}
int main()
{  
    int n,key;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
   cin>>key;
   int c=binary_search(arr,0,n-1,key);
    if(c!=-1)
   cout<<"present "<<comparsion;
   else
   cout<<"not present "<<comparsion;
    return 0;
}