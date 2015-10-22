#include<stdio.h>//libreria de entrada E/S
int N1;
int N2;
int main()
{//inicio
	printf("lavadora pro-3000 RS ultra\n");
	printf("introdusca el peso a lavar\n");
	scanf("%d",&N1);
	if(N1>=21)
	{
		printf("no se lava");
	}
	else{
		if(N1<=10){
			printf("\nnivel de agua MINIMO");			
		}
		else{
			if(N1<=15){
				printf("\nnivel de agua MEDIO");
			}
			else{
				if(N1<=20){
					printf("nivel de agua MAXIMO");
				}
			}
		}
	
		printf("\nescriba el ciclo de lavado");
		printf("\ndelicado=1,normal=2,sucia=3\n");
		scanf("%d",&N2);
		switch(N2){
			case 1:
				printf("tardara 5 min");
				break;
			
			case 2:
				printf("tardara 10 min");
				break;
			
			case 3:
				printf("tardara 20 min");
				break;
			
			default:
				printf("no existe opcion");			
		}
	}
}//fin
