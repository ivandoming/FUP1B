#include<stdio.h>
int N1,N2,r1;
int v;
float r2;
main()
{
	v=1;
	while(v==1)	
	{
		printf("dame un numero:\n");
		scanf("%d",&N1);
		printf("dame un numero:\n");
		scanf("%d",&N2);
		r1=N1+N2;
		printf("\nresultado%d",r1);
		r1=N1-N2;
		printf("\nresultado%d",r1);
		r1=N1*N2;
		printf("\nresultado%d",r1);
		r2=N1/N2;
		printf("\nresultado%f",r2);
		printf("\nquiere seguir:si=1/no=2\n");
		scanf("%d",&v);
	}
}
