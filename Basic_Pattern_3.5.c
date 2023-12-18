#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=65;j<=64+i;j++)
        {
            printf("%c ",j);
        }
        printf("
");
    }
}