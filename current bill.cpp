#include<stdio.h>
int main()
{
    int u;
    double t;
    scanf("%d",&u);
    if(u<=199)
    {t=u*1.20;}
    else if (u<400)
    {t=u*1.50;}
    else if (u<600)
    {t=u*1.80;}
    else
    {t=u*2.00;}
    if (t>400)
    {printf("%.2f",t+(0.15*t));}
    else
    {printf("%.2f",t+100);}
}
