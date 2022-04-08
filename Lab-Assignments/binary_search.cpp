#include<iostream>
using namespace std;
static int comparsion=0;
int binarysearch(int arr[],int l, int r, int key)
{   
    if(r>=l)
    {
      int mid=l+(r-l)/2;
        if(arr[mid]==key)
        {  
            comparsion++;
            return mid;
        }
        else if(arr[mid]<key)
        {    comparsion++;
            return binarysearch(arr,mid+1,r,key);
        }
        else
        {  comparsion++;
            return binarysearch(arr,l,mid-1,key);
        }

    }
  return -1;
    
}
int main()
{  int n;
   cin>>n;
    int arr[n];
    for(int i=0; i<n ; i++)
     cin>>arr[i];
     int key;
     cin>>key;
    int c=binarysearch(arr,0,n-1,key);
    if(c!=-1)
    cout<<"present "<<comparsion;
    else
    cout<<"not present "<<comparsion;
    // 10, 20, 30, 50, 60, 80, 110, 130, 140, 170}, x = 110
    return 0;
}