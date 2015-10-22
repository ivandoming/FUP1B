#include<stdio.h>//libreria de E/S
int N1;
int N2;
int total;
int subtotal;
int personas;
int main()
{//inicio
	printf("cuenta:\n");
	scanf("%d",&N1);
	total=N1*0.10;
	subtotal=total+1500;
	printf("numero de personas:\n");
	scanf("%d",&N2);
	personas=subtotal/N2;
	printf("\ntotal;%d",total);
	printf("\ntotal;%d",subtotal);
	printf("\ntotal;%d",personas);
}//fin
