#include<iostream>
using namespace std;
int linearsearch(int arr[], int n, int key)
{
    for(int i=0 ; i<n ; i++)
    {
        if(key==arr[i])
        {
            return i+1;
        }
        
    }
    return -1;
}
int main()
{
    int n,key;
    cin>>n;
    int array[n];
    if(n!=0)
    {
       for(int i=0; i<n ; i++)
     cin>>array[i];
     cin>>key;
     int c=linearsearch(array,n,key);
    if(c==-1)
      cout<<"key not found";
      else
      cout<<"key found at "<<c;
    }
    else
    {
        cout<<"invalid size ";
    }
    
}