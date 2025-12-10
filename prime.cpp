#include<stdio.h>
int main()
{
    int n,i=1,r=0;
    scanf("%d",&n);
    while (i<=n)
    {
        i++;
        r=n%i;
        if(r==0)
        {break;}  
    }
    if(i==n)
    {printf("Prime");}
    else
    {printf("Not Prime");}
}
