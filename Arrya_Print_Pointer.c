#include<stdio.h>
#define MAX_SIZE 100
int main()
{
    int  arr[MAX_SIZE];
    int n,i;
    int *p;
    p=&arr;

    printf("Enter size of Array:\n");
    scanf("%d",&n);

   /* printf("Enter elements of Array:\n");
    for(i=0;i<n;++i){
        scanf("%d",p);  //scanf("%d",(p+i));
        p++;
    }

    p=arr;

    printf("Array elements:");
    for(i=0;i<n;++i){
        printf("%d ",*p);   // printf("%d",*(p+i));

        p++;
    }*/

    printf("Enter elements of Array:\n");
    for(i=0;i<n;++i){
        scanf("%d",&p[i]);
    }


    printf("Array elements:");
    for(i=0;i<n;++i){
        printf("%d ",i[p]);

    }

    return 0;

}
