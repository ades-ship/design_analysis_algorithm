#include<iostream>
#include<cmath>
int comparsion=0;
using namespace std;
int jump_sort(int arr[],int n, int key)
{
    int steps,jump;
    steps=jump=sqrt(n);
    int prev=0;
    while(arr[int(min(steps,n))-1]<key)
    {   comparsion++;
        prev=steps;
        steps+=jump;
        if(prev>=n) 
        return -1;
    }
    while(arr[int(prev)]<key)
    {   comparsion++;
        prev+=1;
        if(prev==min(steps,n))
         return -1;
    }
    if (arr[int(prev)]==key)
     return prev;
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
    int c=jump_sort(arr,n,key);
     if(c!=-1)
     cout<<"present "<<comparsion<<endl;
     else
     cout<<"not present"<<comparsion<<endl;
    return 0;
}