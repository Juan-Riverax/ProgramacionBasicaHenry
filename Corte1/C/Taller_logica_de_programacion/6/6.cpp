#include <stdio.h>

int main() 
{
	char ctrl='s';
	
	do{
	    int a, b, c, max, min;
	
	    printf("Ingrese tres numeros: ");
	    scanf("%d %d %d", &a, &b, &c);
	
	    max = a;
	    if (b > max) max = b;
	    if (c > max) max = c;
	
	    min = a;
	    if (b < min) min = b;
	    if (c < min) min = c;
	
	    printf("El mayor es: %d\n", max);
	    printf("El menor es: %d\n", min);
	
	printf("Desea correr el programa otra vez?\n\n(s/n)\n");
	scanf(" %c",&ctrl);
	} while (ctrl=='s'||ctrl=='S');
	return 0;
}
