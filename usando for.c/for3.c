#include<stdio.h>
int n,i;
int main()
{
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		i=n%10;
		printf("%d",i);
		n/=10;
	}
}
