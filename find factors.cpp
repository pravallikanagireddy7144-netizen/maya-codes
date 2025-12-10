#include<stdio.h>
int main()
{
    int a,i=1,r;
    scanf("%d",&a);
    while (i<=a)
    {
        r=a%i;
        if (r==0)
        {printf("%d ",i);}
        i++;
    }
}
