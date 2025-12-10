#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&b,&a,&d,&c);
    if((a+(2*b))>(c+(2*d)))
    {
        printf("Messi");
    }
    else if ((a+(2*b))==(c+(2*d)))
    {
        printf("Equal");
    }
    else 
    {
        printf("Ronaldo");
    }
}
