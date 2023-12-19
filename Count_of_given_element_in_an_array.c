#include<stdio.h>
int main()
{
    int n,a,count=0;
    scanf("%d",&n);
    int i,arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }    
    scanf("%d",&a);
    for(i=0;i<n;i++)
    {
        if(arr[i]==a)
        { 
            count++;
        }
    }
    printf("%d",count);
}