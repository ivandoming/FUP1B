#include<stdio.h>//dolor de cabeza de E/s
int N1;
int N2;
int N3;
int x;
main()
{//inicio
	printf("programa de ordanar 3 numeros\n");
	printf("escriba un numero\n");
	scanf("%d",&N1);
	printf("escriba un numero\n");
	scanf("%d",&N2);
	printf("escriba un numero\n");
	scanf("%d",&N3);
	if(N1<N2)
	{
		x=N1;
		N1=N2;
		N2=x;
	}
	if(N2<N3)
	{
		x=N2;
		N2=N3;
		N3=x;
	}
	if(N1<N2)
	{
		x=N1;
		N1=N2;
		N2=x;
	}
	if(N2<N3)
	{
		x=N2;
		N2=N3;
		N3=x;
	}
	printf("\n%d\n",N1);
	printf("%d\n",N2);
	printf("%d\n",N3);
}//fin
