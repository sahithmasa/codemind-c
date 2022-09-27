#include<stdio.h>
int main()
{
    int n;
    int rem=0,p=1,s=0;
    scanf("%d",&n);
    while(n)
    {
        rem=n%10;
        s+=rem;
        p*=rem;
        n/=10;
    }
    if(s==p)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}