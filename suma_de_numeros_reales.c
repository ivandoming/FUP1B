#include <stdio.h>
int i;
int cantidad=1;
int suma=0;
main()
{//inicio
	printf("Ingresa un numero:\n");
	scanf("%d",&i);
	while(cantidad<=i)
	{
		suma=cantidad+suma;
		cantidad=cantidad+1;
	}
	printf("%d",suma);
}//fin
