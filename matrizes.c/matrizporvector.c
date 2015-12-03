#include<stdio.h>
int identidad[3][3],i,j,vector[3][1],a,b,resultado[3][1],k;
int main()
{
	printf("introdusca los dijitos del vector uno por uno\n");
	for(a=0;a<=2;a++)
	{
		for(b=0;b<=0;b++)
		{
			scanf("%d",&vector[a][b]);
		
		}
	}
	printf("la matriz vector es:\n");
	for(a=0;a<=2;a++)
	{
		for(b=0;b<=0;b++)
		{
			printf("%d ",vector[a][b]);
		}
		printf("\n");
	}
	printf("introdusca los dijitos de la matriz uno por uno\n");
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
			printf("%d",identidad[i][j]);
		}
		printf("\n");
	}
	printf("El vector por matriz es:\n");
    for(i=0;i<3;i++)
    {
    	for(j=0;j<1;j++)
    	{
    		printf("%d",resultado[i][j]*vector[a][b]);
		}
	}
		printf("\n");
}
