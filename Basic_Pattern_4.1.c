#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            ((i%2==0)?printf("1 "):printf("0 "));
        }
        printf("
");
    }
}