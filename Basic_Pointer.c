#include<stdio.h>
int main()
{
    int i=5;
    int *ip=&i;
    printf("%d\n",*ip);

    *ip=7;

    printf("%d\n",i);

    int j=3;
    ip=&j;

    printf("%d\n",*ip);

    int *ip2;
    ip2=ip;

    printf("%d\n",*ip2);

    ip=&i;
    printf("%d\n",*ip);

    return 0;
}
