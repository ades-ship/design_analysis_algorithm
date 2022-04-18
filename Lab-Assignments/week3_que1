#include<iostream>
using namespace std;
void Insertion_Sort(int arr[],int n)
{    int c=0,s=0;
    for(int i=1;i<n;i++)
    {
       int key=arr[i];
       int j=i-1;
        while(j>=0 && arr[j]>key)
        {
            c++;
            s++;
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
        s++;

    }

     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nComparisons="<<c<<endl;
    cout<<"Shifts="<<s;

}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
   {
     cin>>n;
     int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    Insertion_Sort(arr,n);
   }
    return 0;
}
