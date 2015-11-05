#include<stdio.h>
int x,y,z,u,d,c,m;
char s;
main()
{
	
	s='s';
while(s=='s')
{
	printf("programa que te dice las unidades,decenas,centellas y millares de un numero\n\n");
	printf("ingrse su numero:");
	scanf("%d",&x);
	u=x%10;
	printf("unidades:%d\n",u);
	y=x-u;
	y=y%100;
	d=y/10;
	printf("decenas:%d\n",d);
	y=x-d*10-u;
	z=y%1000;
	c=(z/10)/10;
	printf("centenas:%d\n",c);
	y=x-d*10-c*10-u;
	m=y/1000;
	printf("millares:%d\n",m);
	scanf("%c",&s);
	}
}
