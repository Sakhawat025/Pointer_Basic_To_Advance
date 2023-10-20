#include<stdio.h>

int length(char *p)
{
    int i;
    for(i=0;p[i];++i);
    return i;
}

int main()
{
    char str[20]="SakhawatHossain";
    int l=length(str);
    printf("%d",l);

}
