#include<stdio.h>
int main()
{
    /*int num,num1,sum;
    int *p,*p1;

    p=&num;
    p1=&num1;

    printf("Enter any two numbers:");
    scanf("%d%d",p,p1);

    sum=*p+*p1;

    printf("\n%d\n",sum); */


    // C program to perform all arithmetic operations using pointers.

    float num,num1;
    float *p,*p1;

    float sum,diff,mult,div;

    p=&num;
    p1=&num1;

    printf("Enter two real number:\n");
    scanf("%f%f",p,p1);

    sum=(*p)+(*p1);
    diff=(*p)-*(p1);
    mult=(*p)*(*p1);
    div=(*p)/(*p1);

    printf("sum=%f\n",sum);
    printf("diff=%f\n",diff);
    printf("mult=%f\n",mult);
    printf("div=%f\n",div);


    return 0;

}
