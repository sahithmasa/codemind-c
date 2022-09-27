#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sq,rem=0,s=0;
    sq=n*n;
    while(sq)
    {
        rem=sq%10;
        s+=rem;
        sq/=10;
    }
    if(s==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}