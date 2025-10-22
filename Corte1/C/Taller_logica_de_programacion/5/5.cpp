#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ( )
{
	char ctrl='s';
	do 
	{
		float AP;
		int monedita,elec;
		printf("Ingrese la cantidad que desea apostar:\n");
		scanf("%f",&AP);
		
		printf("1. Cara\n2. Cruz\n");
		scanf("%d",&elec);
		
		monedita = (rand()%2)+1;
		
		printf("Resultado de la moneda: ");
		if (monedita==1)
		{
			printf("Cara\n");
		} else 
		{
			printf("Cruz\n");	
		}
		
		
		if(elec==monedita)
		{
			AP=AP*2;
			printf("Ganastee!\nTe ganaste: %.2f\n",AP);	
		} else 
		{
			printf("Perdiste todo XD\n");	
		}
	printf("\nDesea jugar otra vez?\n\n(s/n)\n");
	scanf(" %c",&ctrl);
	} while (ctrl=='s'||ctrl=='S');
}
