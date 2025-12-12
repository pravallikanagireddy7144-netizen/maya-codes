#include<stdio.h>
int main()
{
    int Year,x;
    scanf("%d",&Year);
    x=Year%100;
    if (x<=9)
    {
        printf("0%d",x);
    }
    else
    {
        printf("%d",x);
    }
}
