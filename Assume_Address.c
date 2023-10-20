#include<stdio.h>
int main()
{
    int a=50,b=0;
    printf("a=%d\n",a);
    printf("b=%d\n",b);

    int *a_p=200,*b_p=300;
    int *ap=&a,*bp=&b;

    // print Value.
    printf("a=%d b=%d\n",a,b);
    // print Address.
    printf("a_p=%d b_p=%d\n",a_p,b_p);

    b=a+*bp;
    // print value.
    printf("a=%d b=%d\n",a,b);
    // print Address.
    printf("a_p=%d b_p=%d\n",a_p,b_p);

    a_p=b_p;
    // print value.
    printf("a=%d b=%d\n",a,b);
    // print Address.
    printf("a_p=%d b_p=%d\n",a_p,b_p);

    a=(*ap)*(*bp);
    // print value.
    printf("a=%d b=%d\n",a,b);
    // print Address.
    printf("a_p=%d b_p=%d\n",a_p,b_p);

    *b_p=a/b;
    // print value.
    printf("a=%d b=%d\n",a,b);
    // print Address.
    printf("a_p=%d b_p=%d\n",a_p,b_p);

    *a_p=a%b;
    // print value.
    printf("a=%d b=%d\n",a,b);
    // print Address.
    printf("a_p=%d b_p=%d\n",a_p,b_p);

}
