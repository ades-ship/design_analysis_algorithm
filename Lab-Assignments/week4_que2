#include<stdio.h>
int s=0;
void quicksort(int arr[] , int low , int high , int *c);
int partition(int arr[] , int low , int hight, int *c);
void swap(int *a,int *b);
int main(){
    int t,n;
    printf("Enter the test Cases : ");
    scanf("%d",&t);
    while(t){
        s=0;
        int c=0;
        printf("Enter the number of element in array :");
        scanf("%d",&n);
        int arr[n];
        printf("Enter the element in array :");

        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        int low=0,high=n-1;
        quicksort(arr,low,high,&c);
        for(int i=0;i<n;i++){
            printf("%d ",arr[i]);
        }
            printf("\nComparision : %d\n",c);
            printf("\nSwaps : %d\n",s);

    t--;
    }
}
void swap(int *a,int *b){
    s++;
    int temp=*a;
    *a=*b;
    *b=temp;
}
void quicksort(int arr[] , int low , int high , int *c){
    if(low<high){
        int p=partition(arr,low,high,c);
        quicksort(arr,low,p-1,c);
        quicksort(arr,p+1,high,c);
    }
}
int partition(int arr[] , int low , int high, int *c){
    int i=low-1;
    int pivot=arr[high];
    for(int j=i+1;j<high;j++){
        (*c)++;
        if(arr[j]<pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
        swap(&arr[i+1],&arr[high]);
    return i+1;
}
