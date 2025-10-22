#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int dia,mes;
	char cont='s';
	
		do
		{
			printf("Digite su mes y dia de nacimiento\n");
			scanf("%d %d",&mes,&dia);
			
			switch (mes) 
			{
				case 1: if (dia>=1 && dia<=19)
				{
					printf("Su signo zodiacal es: Capricornio\n");
					break;
				} else if (dia>19 && dia<=31) {
					printf("Su signo zodiacal es: Acuario\n");
					break;
				} else {
					printf("Dia no existente\n");
					break;
				}
				
				case 2: if (dia>=1 && dia<=18)
				{
					printf("Su signo zodiacal es: Acuario\n");
					break;
				} else if (dia>18 && dia<=29) {
					printf("Su signo zodiacal es: Piscis\n");
					break;
				} else {
					printf("Dia no existente\n");
					break;
				}
				
				case 3: if (dia>=1 && dia<=20)
				{
					printf("Su signo zodiacal es: Piscis\n");
					break;
				} else if (dia>20 && dia<=31) {
					printf("Su signo zodiacal es: Aries\n");
					break;
				} else {
					printf("Dia no existente\n");
					break;
				}
				
				case 4: if (dia>=1 && dia<=19)
				{
					printf("Su signo zodiacal es: Aries\n");
					break;
				} else if (dia>19 && dia<=30) {
					printf("Su signo zodiacal es: Tauro \n");
					break;
				} else {
					printf("Dia no existente\n");
					break;
				} 
				
				case 5: if (dia>=1 && dia<=20)
				{
					printf("Su signo zodiacal es: Tauro\n");
					break;
				} else if (dia>20 && dia<=31) {
					printf("Su signo zodiacal es: Geminis\n");
					break;
				} else {
					printf("Dia no existente\n");
					break;
				}
				
				case 6: if (dia>=1 && dia<=20)
				{
					printf("Su signo zodiacal es: Geminis\n");
					break;
				} else if (dia>20 && dia<=30) {
					printf("Su signo zodiacal es: Cancer\n");
					break;
				} else {
					printf("Dia no existente\n");
					break;
				}
				
				case 7: if (dia>=1 && dia<=22)
				{
					printf("Su signo zodiacal es: Cancer\n");
					break;
				} else if (dia>22 && dia<=31) {
					printf("Su signo zodiacal es: Leo\n");
					break;
				} else {
					printf("Dia no existente\n");
					break;
				}
				
				case 8: if (dia>=1 && dia<=22)
				{
					printf("Su signo zodiacal es: Leo\n");
					break;
				} else if (dia>22 && dia<=31) {
					printf("Su signo zodiacal es: Virgo\n");
					break;
				} else {
					printf("Dia no existente\n");
					break;
				}
				
				case 9: if (dia>=1 && dia<=22)
				{
					printf("Su signo zodiacal es: Virgo\n");
					break;
				} else if (dia>22 && dia<=30) {
					printf("Su signo zodiacal es: Libra\n");
					break;
				} else {
					printf("Dia no existente\n");
					break;
				}
				
				case 10: if (dia>=1 && dia<=22)
				{
					printf("Su signo zodiacal es: Libra\n");
					break;
				} else if (dia>22 && dia<=31) {
					printf("Su signo zodiacal es: Escorpio\n");
					break;
				} else {
					printf("Dia no existente\n");
					break;
				}
				
				case 11: if (dia>=1 && dia<=21)
				{
					printf("Su signo zodiacal es: Escorpio\n");
					break;
				} else if (dia>21 && dia<=30) {
					printf("Su signo zodiacal es: Sagitario\n");
					break;
				} else {
					printf("Dia no existente\n");
					break;
				}
				
				case 12: if (dia>=1 && dia<=21)
				{
					printf("Su signo zodiacal es: Sagitario\n");
					break;
				} else if (dia>21 && dia<=31) {
					printf("Su signo zodiacal es: Capricornio\n");
					break;
				} else {
					printf("Dia no existente\n");
					break;
				}
				default : printf("Mes no existente\n"); break;
			}
			printf("Desea ingresar una nueva fecha?\n(s/n)\n");
			scanf(" %c",&cont);
		} while(cont=='s'||cont=='S');
}
