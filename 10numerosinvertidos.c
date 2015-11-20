#include<stdio.h>
int N1[10],i=0; 
int main()
{
	for(i=0;i<10;i++)
	{
		scanf("%d",&N1[i]);
	}
	for(i=9;i>-1;i--)
	{
		printf("%d\n",N1[i]);
	}	
}
