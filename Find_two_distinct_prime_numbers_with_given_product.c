#include<stdio.h>
int prime(int n)
{
	int i,s=0;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
			s=1;
			break;
	}
	if (s==0)
	{
	    return 1;
	}
	else
	{
	    return 0;
	}
}
int main()
{
    int n,i,j,flag=0;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    for(j=2;j<=n;j++)
    {
        {
            if (prime(i) && prime(j))
            {
                if (i<j)
                {
                    if (i*j==n)
                    {
                        printf("%d %d",i,j);
                        flag=1;
                    }
                }
            }
        }
    }
    if (flag==0)
    {
        printf("-1");
    }
    return 0;
}