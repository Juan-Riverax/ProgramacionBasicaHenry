#include <stdio.h>
#include <stdlib.h>

int main() 
{
	char N[50];
	float Pu,Tot;
	int Nu;
	printf("Digite el nombre del producto\n");
	scanf("%s", N);
	
	printf("Digite el precio por unidad\n");
	scanf("%f", &Pu);
	
	printf("Digite el # de unidades\n");
	scanf("%d", &Nu);
	
	Tot=Pu*Nu;
	
	printf("Nombre del producto: %s\n", N);
	
	printf("Numero de unidades vendidas: %d\n", Nu);
	
	printf("Precio total: %.2f\n", Tot);
	
		
}
