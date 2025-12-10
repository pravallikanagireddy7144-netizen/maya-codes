#include<stdio.h>
int main ()
{
    int n,m,x,y,i=0,f,t=0;
    scanf("%d%d",&n,&m);
    f=(m<n?m:n);
    while (i<=f)
    {
        i++;
        x=n%i;
        y=m%i;
        if (x==0&&y==0)
        {t=(t>i?t:i);}
    }
    printf("%d",t);
}
        
    

