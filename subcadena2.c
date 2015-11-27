#include<stdio.h>
char cadena[50],subcadena[50];
int i,j,k;
int main()
{
	scanf("%s",cadena);
	scanf("%s",subcadena);
	j=0;
	i=0;
	k=1;
	while(cadena[i]!='\n')
	{
		
		while(cadena[i]==subcadena[j])
		{
			i++;
			j++;
			if(subcadena[j]=='\0')
			{
				printf("existe");
				k=0;
				break;
			}
		}
		i++;
		j=0;
	}
	if(k==1)
	{
		printf("no existe");
	}
}
