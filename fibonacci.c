#include<stdio.h>
int main ()
{
    int a=0,b=1,n;
    scanf("%d",&n);
    int c;
    printf("%d %d ",a,b);
    for (int i=2;i<n;i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
}