#include<stdio.h>//libreria de E/S
/*programa de suma,resta,multiplicación y division
*/
int resultado;
int resta;
int cociente;
int multiplicacion;
float division;
int N1;
int N2;
int N3;
int N4;
int N5;
int N6;
int main()
{//inicio
	printf("dame un numnero:\n");
	scanf("%d",&N1);
	printf("dame otro numero:\n");
	scanf("%d",&N2);
	resultado=N1+N2;
	printf("el resultado es: %d",resultado);	
	printf("dame un numero:\n");
	scanf("%d",&N3);
	printf("dame otro numero:\n");	
	scanf("%d",&N4);
	resta=N3-N4;
	printf("el resultado es: %d",resta);
	printf("dame un numero:\n");
	scanf("%d",&N3);
	printf("dame otro numero:\n");
	scanf("%d",&N4);
	multiplicacion=N3*N4;
	printf("el resultado es: %d",multiplicacion);
	printf("dame el numero:\n");
	scanf("%f",&N5);
	printf("dame otro numero:\n");
	scanf("%f",&N6);
	division=N5/N6;
	printf("el resultado es: %f",division);
}//fin
