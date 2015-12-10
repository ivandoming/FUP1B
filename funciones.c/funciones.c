#include<stdio.h>
int j;
int i=0;
int suma(int a,int b)
{
	int res;
	res=a+b;
	printf("funcion suma i=%d\n");
	return res;
}
void funcion()
{
	printf("j=%d\n",j);
}
int main()
	{
		funcion(); 
		j=10;
		funcion();
	}
