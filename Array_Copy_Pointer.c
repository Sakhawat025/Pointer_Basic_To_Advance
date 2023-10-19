#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of Array:");
    scanf("%d",&n);

    if(n<=0){
        printf("Invalid array.");
        return 1;
    }

    int sour[n],dest[n];
    int *p,*p1;
    p=&sour,p1=dest;

    for(int i=0;i<n;++i){
        scanf("%d",&p[i]);
    }

    for(int i=0;i<n;++i){
        *p1=*p;
        p++;
        p1++;
    }

    printf("Copy the array.\n");
    for(int i=0;i<n;++i){
         printf("%d ",dest[i]);
    }
    printf("\n");

    return 0;


}
