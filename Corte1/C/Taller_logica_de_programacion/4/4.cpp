#include <stdio.h>
#include <stdlib.h>

int main( )
{
float a,b;
char cont='s';


	do {
		printf("Digite 2 numeros\n");
		scanf("%f %f",&a,&b);
			if (a>b) 
			{
				printf("El primer numero es mayor al segundo: %.0f>%.0f\n",a,b);	
			} else if (a<b) 
			{
				printf("El segundo numero es mayor al primero: %.0f>%.0f\n",b,a);
			} else 
			{
				printf("Los dos numeros son iguales: %.0f=%.0f\n",a,b);		
			}
		printf("Desea realizar otra comparacion?\ns = si\nn = no\n");
		scanf(" %c",&cont);
	} while(cont=='s'||cont=='S');



	
}
