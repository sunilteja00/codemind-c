#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=1;j--)
        {
            (j<=i?printf("%d",i):printf("*"));
        }
        printf("
");
    }
}