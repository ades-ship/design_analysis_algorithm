#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int comparsion=1;
int binarysearch(int arr[],int l, int r, int key)
{   
    if(l<=r)
    {
      int mid=l+(r-l)/2;
        if(arr[mid]==key)
        {  
             comparsion++;
            return mid;
        }
        else if(arr[mid]<key)
        {     comparsion++;
            return binarysearch(arr,mid+1,r,key);
        }
        else
        {    comparsion++;
            return binarysearch(arr,l,mid-1,key);
        }
     
    }
  return -1;
    
}
int exponential_search(int arr[],int  n, int key)
{
    if(arr[0]==key)
     return 0;
     int i=1;
     while(i<n && arr[i]<=key) 
      {  
          comparsion++;
           i=i*2;
      }
    return binarysearch(arr,int(i/2),n-1,key);
     
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
   int flag=exponential_search(arr,n,key);
    if(flag!=-1)
    cout<<"present "<<comparsion<<endl;
    else
    cout<<"not present"<<comparsion<<endl;
    return 0;
}