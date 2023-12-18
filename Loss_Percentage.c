#include<stdio.h>
int main()
{
    float cp,sp,n;
    scanf("%f%f",&cp,&sp);
    n=((cp-sp)*100)/cp;
    printf("%.2f",n);
}