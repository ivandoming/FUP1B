#include<stdio.h>//Libreria de E/S
int bits;
int bytes;
int KB;
int GB;
int TB;
int N1;
int main()
{//Inicio
	float N1,bits,bytes,KB,GB,TB;
	printf("Escribe el numero de megabytes a convertir:\n");
	scanf("%f",&N1);
	bits=N1*1024*1024*8;
	bytes=N1*8;
	KB=bytes*1024;
	GB=N1/1024;
	TB=N1/1024/1024;
	printf("\nLa conversion a bits es de:%f",bits);
	printf("\nLa conversion a bytes es de:%f",bytes);
	printf("\nLa conversion a kilobytes es de:%f",KB);
	printf("\nLa conversion a gigabytes es de:%f",GB);
	printf("\nLa conversion a terabytes es de:%f",TB);
}//Fin
