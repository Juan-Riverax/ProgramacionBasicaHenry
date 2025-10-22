#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ( )
{
	int nmr, ntnt, k=0;
	char cont='s';
		
		srand(time(0));
		nmr= (rand()%10)+1;
	do 
	{	k=0;	
		do
		{
			 printf("Ingrese un numero entre 1 y 10: \n");
			 scanf("%d",&ntnt);
			 
			 if(ntnt!=nmr){
			 	printf("\nIncorrecto. Intente de nuevo :P.\n");
			 }
			 k++;
		} while (ntnt!=nmr);
		
		printf("Correcto broski. El numero era %d. Lo lograste en %d intentos\n",nmr,k);
		printf("\nDesea jugar otra vez?\n(s/n)\n");
		scanf(" %c",&cont);
		
	} while(cont=='s'||cont=='S');
}
