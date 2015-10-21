#include<stdio.h>//libreria de E/S
int N1;
int main()
{//inicio
printf("numero de mes que quiera");
scanf("%d",&N1);
switch(N1){
	case 1:{
		printf("enero");
		break;
	}
	case 2:{
		printf("febrero");
		break;
	}
	case 3:{
		printf("marzo");
		break;
	}
	case 4:{
		printf("abril");
		break;
	}
	case 5:{
		printf("mayo");
		break;
	
	}case 6:{
		printf("junio");
		break;
	}
	case 7:{
		printf("julio");
		break;
	}
	case 8:{
		printf("agosto");
		break;
	}
	case 9:{
		printf("septiembre");
		break;
	}
	case 10:{
		printf("octubre");
		break;
	}
	case 11:{
		printf("noviembre");
		break;
	}
	case 12:{
		printf("diciembre");
		break;
	}
	default: printf("no hay intente de nuevo");
}

}//fin
