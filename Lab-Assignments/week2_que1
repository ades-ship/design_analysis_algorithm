#include<stdio.h>
int main()
{
    int t;
    printf("enter the no of test cases:");
    scanf("%d", &t);

    while(t)
    {
        int n;
        printf("enter the size of array:");
        scanf("%d", &n);
        printf("enter the elements of array:");
        int arr[n];
        for(int i=0; i<n; i++)
            scanf("%d", &arr[i]);


        int key;
        printf("enter the key:");
        scanf("%d", &key);

        int occur1=0,occur2=0,l=0, r=n;

        while(l<=r)
        {
            int mid = l + (r-l)/2;
            if(arr[mid]>key){
                r=mid-1;
            }
            else if(arr[mid]<key)
                l=mid+1;
            else
            {
                occur1=mid;
                occur2=mid;
                while(arr[occur1]==arr[mid])
                    occur1--;
                while(arr[occur2]==arr[mid])
                    occur2++;
                    break;
            }
        }

        printf("%d occurs %d times", key,(occur2-occur1)-1);

    t--;
    }
}
