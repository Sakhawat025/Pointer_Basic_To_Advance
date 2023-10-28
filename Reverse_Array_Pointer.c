#include<stdio.h>

void reverseArray(int *arr,int n)
{
    int *start,*end;
    start=arr;
    end=arr+(n-1);

    while (start<end){
        int temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
}

int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;++i){
        scanf("%d",&arr[i]);
    }

    printf("The Original array is : ");
    for(int i=0;i<n;++i){
        printf("%d ",arr[i]);
    }

    reverseArray(arr,n);

    printf("\nReversed array:");
    for(int i=0;i<n;++i){
        printf("%d ",arr[i]);
    }

    return 0;

}
