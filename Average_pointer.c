#include<stdio.h>
int main()
{
    int a[5]={3,8,2,7,6};
    int *p;
    p=&a[0]; //p=a;
    float sum=0;
    int i;
    for(i=0;i<5;++i){
        sum+=*p;
        p++;
    }sum/=5;
    printf("%f",sum);
}
