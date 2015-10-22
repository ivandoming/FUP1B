
#include<stdio.h>//libreria de E/S
int N1;
int N2;
int total;
int main()
{//inicio
printf("tiendita\n");
printf("$10 sushi=1,$7 papas=2,$5 cheetos=3,$15 jugos=4,$12 mantecadas=5,$17 aspirina=6\n,$20 cereal=7,$5 lapiz=8,$8 sabritas=9,$10 barritas=10\n");
printf("que elejiste\n");
scanf("%d",&N1);
switch(N1){

	case 1:
	{printf("cuantos quieres\n");
	scanf("%d",&N2);
	N1=10;
	total=N1*N2;
	printf("shushi\ncuesta $10\n");
	printf("total a pagar\n");
	printf("%d",total);
		}break;
	case 2:
	{printf("cuantos quieres\n");
	scanf("%d",&N2);
	N1=7;
	total=N1*N2;
	printf("papas\ncuesta $7\n");
	printf("total a pagar\n");
	printf("%d",total);
		break;
	case 3:
	{printf("cuantos quieres\n");
	scanf("%d",&N2);
	N1=5;
	total=N1*N2;
	printf("cheetos\ncuesta $5\n");
	printf("total a pagar\n");
	printf("%d",total);
		}break;
	case 4:{printf("cuantos quieres\n");
	scanf("%d",&N2);
	N1=15;
	total=N1*N2;
	printf("jugos\ncuesta $15\n");
	printf("total a pagar\n");
	printf("%d",total);
		}break;
	case 5:{printf("cuantos quieres\n");
	scanf("%d",&N2);
	N1=12;
	total=N1*N2;
	printf("mantecadas\ncuesta $12\n");
	printf("total a pagar\n");
	printf("%d",total);
		}break;
	case 6:{printf("cuantos quieres\n");
	scanf("%d",&N2);
	N1=17;
	total=N1*N2;
	printf("mantecadas\ncuesta $17\n");
	printf("total a pagar\n");
	printf("%d",total);
		}break;
	case 7:{printf("cuantos quieres\n");
	scanf("%d",&N2);
	N1=20;
	total=N1*N2;
	printf("cereal\ncuesta $20\n");
	printf("total a pagar\n");
	printf("%d",total);
		}break;
	case 8:{printf("cuantos quieres\n");
	scanf("%d",&N2);
	N1=5;
	total=N1*N2;
	printf("lapiz\ncuesta $5\n");
	printf("total a pagar\n");
	printf("%d",total);
		}break;
	case 9:{printf("cuantos quieres\n");
	scanf("%d",&N2);
	N1=8;
	total=N1*N2;
	printf("sabritas\ncuesta $10\n");
	printf("total a pagar\n");
	printf("%d",total);
		}break;	
	case 10:{printf("cuantos quieres\n");
	scanf("%d",&N2);
	N1=10;
	total=N1*N2;
	printf("barritas\ncuesta $10\n");
	printf("total a pagar\n");
	printf("%d",total);
		}break;	
		default:{
		 printf("no hay eleccion gracias por su visita    0");}
	}
}
}//fin
