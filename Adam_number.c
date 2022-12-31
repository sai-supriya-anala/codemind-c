#include<stdio.h>
int main ()
{
    int a;
    scanf("%d",&a);
    int b=a*a;
    int c=a;
    int r,s=0;
    while (c!=0)
    {
        r=c%10;
        s=s*10+r;
        c=c/10;
    }
    int d=s*s;
    int e=d;
    int q,p=0;
    while (e!=0)
    {
        q=e%10;
        p=p*10+q;
        e=e/10;
    }
    if (b==p) printf("True");
    else printf("False");
}