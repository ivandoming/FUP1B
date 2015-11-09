#include<stdio.h>
int numero,i;
int res;
int main()
{
	scanf("%d",&numero);
	for(i=1;i<=numero;i++)
	{
		res=numero/10;
		numero/=10;
		printf("%d\n",res);	
	}
}
