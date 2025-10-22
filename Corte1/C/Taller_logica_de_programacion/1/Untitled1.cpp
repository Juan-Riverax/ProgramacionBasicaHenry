#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
int operacion;
float V=0,b,l,PI=3.1459;
char cont;

	printf("Que desea hacer?\nA = Area\nP = Perimetro\n");
	scanf(" %c",&cont);
	
	if (cont=='a'||cont=='A')
	{
		do
		{
			printf("A que figura le desea calcular el area?\n1 = Cuadrado\n2 = Rectangulo\n3 = Triangulo\n4 = Circulo\n");
			scanf("%d",&operacion);
			
			switch (operacion)
				{
				case 1: 
					printf("Digite el valor de un lado\n");
					scanf("%f",&l);
					V=l*l;
					printf("El valor del Area es: %f\n",V);
					break;
				case 2:
					printf("Digite el valor de la base y a altura\n");
					scanf("%f %f",&b,&l);
					V=l*b;
					printf("El valor del Area es: %f\n",V);
					break;
				case 3:
					printf("Digite el valor de la base y la altura\n");
					scanf("%f %f",&b,&l);
					V=(b*l)/2;
					printf("El valor del Area es: %f\n",V);
					break;
				case 4:
					printf("Digite el valor del radio\n");
					scanf("%f",&l);
					V=PI*l*l;
					printf("El valor del Area es: %f\n",V);
					break;	
				default :
					printf("Opcion no valida\n");
					break;
				}
				printf("Desea calcular el area otra vez?\n");
				scanf(" %c",&cont);
		}while (cont=='s'||cont=='S');
			
	}else if (cont=='p'||cont=='P')
	{
		 do {
			printf("A que figura le desea calcular el perimetro?\n1 = Cuadrado\n2 = Rectangulo\n3 = Triangulo\n4 = Circulo\n");
			scanf("%d",&operacion);
			
			switch (operacion)
			{
				case 1: 
					printf("Digite el valor de un lado\n");
					scanf("%f",&l);
					V=l+l+l+l;
					printf("El valor del Perimetro es: %f\n",V);
					break;
				case 2:
					printf("Digite el valor de la base y a altura\n");
					scanf("%f %f",&b,&l);
					V=2*(b+l);
					printf("El valor del Perimetro es: %f\n",V);
					break;
				case 3:
					printf("Digite el valor de un lado\n");
					scanf("%f",&l);
					V=l+l+l;
					printf("El valor del Perimetro es: %f\n",V);
					break;
				case 4:
					printf("Digite el valor del radio\n");
					scanf("%f",&l);
					V= 2*PI*l;
					printf("El valor del Perimetro es: %f\n",V);
					break;	
				default :
					printf("Opcion no valida\n");
					break;		
			} 
			printf("Desea calcular el perimetro otra vez?\nP = si\nN = no\n");
			scanf(" %c",&cont);
			
		}while(cont=='s'||cont=='S');
	}

	
	
	return 0;
}
