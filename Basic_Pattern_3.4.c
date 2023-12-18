#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=64+n;i>=65;i--)
    {
        for(j=i-64;j>=1;j--)
        {
            printf("%c ",i);
        }
        printf("
");
    }
}