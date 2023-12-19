#include<stdio.h>
int main()
{
    int n;
    float sum=0,avg;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    avg=sum/n;
    printf("%.2f",avg);
    
}