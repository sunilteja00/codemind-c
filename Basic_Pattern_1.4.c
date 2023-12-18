#include<stdio.h>
int main()
{
    char ch;
    int i,j,n;
    scanf("%d",&n);
    for(i=65;i<=64+n;i++)
    {
        for(j=65;j<=64+n;j++)
        {
            printf("%c ",j);
        }
        printf("
");
    }
}