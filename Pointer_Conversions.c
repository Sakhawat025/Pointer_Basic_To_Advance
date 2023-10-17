#include<stdio.h>
int main()
{
    double x=100.1,y;
    int *p;

    /* the next statement causes p(which is an integer pointer)
    to point to a double.*/

    p= &x;

    /* the next statement does not operate as expected.*/

    y=*p;  // attempt to assign y the value x through p.

    printf("The (intcorrect) value of x is : %lf",y);

    return 0;
}
