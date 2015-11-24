#include<stdio.h>
int b[8];
int d,mod,residuo,i;
main()
{
	
	scanf("%d",&d);
	if(d<=255)
	{
		i=7;
		while(d>0)
			{
				b[i]=d%2;
				d=d/2;
				i--;
			}
		for(i=0;i<=7;i++)
			{/*los ceros de mas son los digitos que se ocupan*/
					printf("%d",b[i]);
				/*y no los pude quitar*/
			}
	}
	else{
	
	printf("\ningrese numero menor a 255");
}
}
