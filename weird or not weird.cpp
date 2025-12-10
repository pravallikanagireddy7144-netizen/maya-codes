#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if (x%2==0)
    {
        if (x>=2&&x<=5)
        {
            printf("not weird");
        }
        else if (x>=6&&x<=20)
    {
        printf("weird");
    }
    else
    {
        printf("not weird");
    }
    }
    else
    {
        printf("weird");
    }
}
