#include <stdio.h>
#include <stdlib.h>
 
 
 int main ( )
 {
 	float nota;
 	char cont='s';
 	
 	do
	{
	 
	 	printf("Digite su nota:\n");
	 	scanf("%f",&nota);
		 
		 if (nota>=0 && nota<5) { printf("Suspenso\n");} 
		 
		 else if (nota>=5 && nota<7) { printf("Aprobado\n"); } 
		 else if (nota>=7 && nota<9)
		 {
		 	printf("Notable\n");
		 	
		 } 
		 else if (nota>=9 && nota<10)
		 {
		 	printf("Sobresaliente\n");
		 	
		 } 
		 
		 else if (nota==10)
		 {
		 	printf("Matricula de honor\n");		 	
		 } 
		 else
		 {
		 	printf("Nota invalida\n");
		 }
		 
		 printf("Desea correr el codigo otra vez?\n(s/n)\n");
		 scanf(" %c",&cont);
		 
	} while(cont=='s'||cont=='S');
}
