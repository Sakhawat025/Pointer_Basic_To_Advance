#include<stdio.h>
int main()
{
    int a,b;
    int *p,*q;
    a=5,b=78;
    p=&a;
    q=&b;

    printf("%d\n",p);
    printf("%d\n",q);
    printf("%d\n",*p);
    printf("%d\n",*q);


    return 0;
}
