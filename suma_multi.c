#include<stdio.h>
int N1;
int N2;
int x=1;
int z=0;
int main()
{//inicio
	printf("multiplicacion con suma de while\n");
	printf("Ingresa la primera cantidad:\n");
	scanf("%d", &N1);
	printf("ingresa la segunda cantidad\n");
	scanf("%d", &N2);
	while(x<=N1)
	{
		z=z+N2;
		x=x+1;
	}
	printf("El resultado de la multiplicacion es:\n%d\n",z);
}//fin
