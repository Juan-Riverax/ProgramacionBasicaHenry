#include <stdio.h>
#include <stdlib.h>

int main ( )
{
	char ctrl='s';
	do
	{
	int ano;
		printf("Ingrese un anio:\n");
		scanf("%d",&ano);
		
		if((ano % 4==0 && ano % 100 !=0)||(ano % 400 == 0)) { printf("El anio es bisiesto\n");}
		else { printf("El anio no es bisiesto\n\n");}
		
		printf("Desea correr el programa otra vez?\n\n(s/n)\n");
		scanf(" %c",&ctrl);
		
	} while (ctrl=='s'||ctrl=='S');
}
