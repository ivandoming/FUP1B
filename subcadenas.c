#include<stdio.h>
char cade[20],buscar[20];
int i,j,ii,k;

int main()
{
	printf("dame la palabra\n");
	scanf("%s",cade);
	printf("dame la subcadena\n");/*tengo un problema, esta limitado a 3 letras*/
	scanf("%s",buscar);
	for(i=0;i<=49;i++)
	{
		k=1;
		if(cade[i]==buscar[0])
		{
			k=0;
			ii=i+1;
			for(j=1;j<=2;j++)
			{
				if(cade[ii]==buscar[j])
				{
					k=0;
				}
				else
				{
					k=1;
				}
				ii++;
			}
		}
		if(k==0)
		{
			i=50;
		}
	}
	if(k==0)
	{
		printf("existe");
	}
	else
	{
		printf("no existe");
	}
}
