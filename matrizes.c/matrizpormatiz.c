#include<stdio.h>
int a[10][10],i,j,b[10][10],c[10][10],k,Ra,Ca,Rb,Cb;
int main()
{
	printf("HAY UNA REGLA LAS COLUMNAS DE LA 1ER MATRIZ DEBEN SER\n IGUALES A LOS REGLONES DE LA 2DA MATRIZ\n");
	printf("numeros de reglones de 1er matriz\n");
	scanf("%d",&Ra);
	printf("numeros de columnas de 1er matriz\n");
	scanf("%d",&Ca);
	printf("numeros de reglones de 2da matriz\n");
	scanf("%d",&Rb);
	printf("numeros de columnas de 2da matriz\n");
	scanf("%d",&Cb);
	Ra--;
	Ca--;
	Rb--;
	Cb--;
	if(Ca!=Rb)
	{
		printf("no se puede resolber deben ser iguales");
	}
	else
	{
		printf("leer la 1 matriz\n");
		for(i=0;i<=Ra;i++)
		{
			for(j=0;j<=Ca;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		printf("leer la 2 matriz\n");
		for(i=0;i<=Ra;i++)
		{
			for(j=0;j<=Ca;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
		printf("multiplicacion\n");
		for(i=0;i<=Ra;i++)
		{
			for(j=0;j<=Cb;j++)
			{
				for(k=0;k<=Ca;k++)
				{
					c[i][j]+=(a[j][k]*b[k][j]);
				}
				printf("%d ",c[i][j]);
			}
			printf("\n");	
		}	
	}
}
