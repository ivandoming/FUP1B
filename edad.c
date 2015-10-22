#include<stdio.h>//libreria de E/S
int N1;
int main()
{//inicio
	printf("inserte la edad\n");
	scanf("%d",&N1);
	if(N1<=12)
	{
		printf("niño");
	}
	else
	{
		if(N1<=18)
		{
			printf("adolecente");
		}
		else
		{
			if(N1<=29)
			{
				printf("joven");
			}
			else		
			{
				if(N1<=59)
				{
					printf("adulto");	
				}
				else
				{
					printf("adulto mayor");
				}	
			}
			
		}
	}
}//fin
