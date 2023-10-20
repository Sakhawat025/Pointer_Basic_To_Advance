#include<stdio.h>
int main()
{
    int a,b,r;
    int *p,*q;
    p=&a;
    q=&b;
    scanf("%d",&a); scanf("%d",p);
    scanf("%d",&b); scanf("%d",q);

    r=(*p)*(*q);
    printf("%d\n",r);
}
