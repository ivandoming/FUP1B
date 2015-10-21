
#include<stdio.h>//libreria de E/S
int N1;
int N2;
int N3;
int N4;
int N5;
int total;
int main()
{//inicio
printf("tiendita\n");
printf("$10 sushi=1,$7 papas=2,$5 chetos=3,$15 jugos=4,$12 mantecadas=5,$17 aspirina=6\n,$20 ceral=7,$5 lapiz=8,$8 sabritas=9,$10 barritas=10\n");
printf("que elejiste\n");
scanf("%d",&N1);
printf("cuantos quieres\n");
scanf("%d",&N2);
switch(N1){

	case 1:N1=10;
	total=N1*N2;
	printf("sishi\n");
	printf("%d",total);
		break;
	case 2:N1=7;
	total=N1*N2;
	printf("papas\n%d",total);
		break;
	case 3:N1=5;
	total=N1*N2;
	printf("cheetos\n",total);
	printf("%d",total);
		break;
	case 4:N1=15;
	total=N1*N2;
	printf("jugos\n",total);
	printf("%d",total);
		break;
	case 5:N1=12;
	total=N1*N2;
	printf("mantecadas\n",total);
	printf("%d",total);
		break;
	case 6:N1=17;
	total=N1*N2;
	printf("aspirinas\n",total);
	printf("%d",total);
		break;
	case 7:N1=20;
	total=N1*N2;
	printf("cereal\n",total);
	printf("%d",total);
		break;
	case 8:N1=5;
	total=N1*N2;
	printf("lapiz\n",total);
	printf("%d",total);
		break;
	case 9:N1=8;
	total=N1*N2;
	printf("sabritas\n",total);
	printf("%d",total);
		break;
	case 10:N1=10;
	total=N1*N2;
	printf("barritas\n",total);
	printf("%d",total);
		break;
	default: printf("no hay eleccion gracias por su visita    0");
	}
}//fin
