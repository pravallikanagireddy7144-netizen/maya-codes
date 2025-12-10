#include<stdio.h>
int main ()
{
    int n,i,j,k;
    scanf("%d",&n);
    for (i=n,k=1;i>=1;i--,k++)
    {
        for (j=1;j<=i;j++)
        {
            printf("%d ",k);
        }
        printf("
");
    }
}
