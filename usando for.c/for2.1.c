#include<stdio.h>
int final,i,j;
int main()
{
	scanf("%d",&final);
	for(i=1;i<=final;i++)
	{
		
		for(j=1;j<=i;j++)
		{
			printf("%d",i);
		}
		
		printf("\n");
	}
}
