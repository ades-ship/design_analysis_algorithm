//Given an unsorted array of integers, design an algorithm and implement it using a program to
//sort an array of elements by dividing the array into two subarrays and combining these subarrays
//after sorting each one of them. Your program should also find number of comparisons and inversions during sorting the array.
#include <iostream>
using namespace std;
void merge(int a[], int l, int m, int r,int *comparison)
{
    int n1 = m - l + 1;
    int n2 = r - m;
    int le[n1];
    int ri[n2];
    for (int i = 0; i < n1; i++)
    {
        le[i] = a[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        ri[i] = a[m + 1 + i];
    }
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
    {
        (*comparison)++;
        if (le[i] < ri[j])
        {
            a[k] = le[i];
            i++;
            k++;
        }
        else
        {
            a[k] = ri[j];
            k++;
            j++;
        }
    }
    while (i < n1)
    {
        a[k] = le[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        a[k] = ri[j];
        j++;
        k++;
    }
}
void mergesort(int a[], int l, int r,int* comparison)
{
    if (l < r)
    {
        int mid = l + (r - l) / 2;
        mergesort(a, l, mid,comparison);
        mergesort(a, mid + 1, r,comparison);
        merge(a, l, mid, r,comparison);
    }
}
int inversionCount(int a[],int n)
{
    int count=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
                count++;
        }
    }
    return count;
}

int main()
{

    int n, t;
    cout << "Enter the no. of test cases\n";
    cin >> t;
    while (t--)
    {
        int a[30];
        cout << "Enter the no. of elements to be stored" << endl;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a[i] = x;
        }
         int c=0;
         c=inversionCount(a,n);
        int comparison=0;
        mergesort(a, 0, n - 1,&comparison);
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
          cout<<endl;
          cout<<"no of inversions:"<<c<<endl;
          cout<<"no. of comparisons:"<<comparison<<endl;

    }
    return 0;
}
