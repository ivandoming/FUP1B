#include<stdio.h>
int cantidad[10];
int x;
int i=0;
int main()
{
printf("multiplos\n");
scanf("%d",&x);
	for(i=0;i<10;i++)
	{
 		cantidad[i]=x*(i+1);
 		printf("\n%d",cantidad[i]);
	}
}
