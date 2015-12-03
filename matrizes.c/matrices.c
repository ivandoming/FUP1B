#include<stdio.h>
int identidad[3][3],i,filas,j,n;
int main()
{
	scanf("%d",&n);
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&identidad[i][j]);
		}
	}
	printf("la matriz identidad es:\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d ",identidad[i][j]*n);
		}
		printf("\n");
	}
	printf("\n");
}
