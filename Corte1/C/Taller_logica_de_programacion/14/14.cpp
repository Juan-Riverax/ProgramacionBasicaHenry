#include <stdio.h>
#include <stdlib.h>

int main ()
{
	float N;
	int p=0,n=0;
	char ctrl='s';
	
	do
	{
		do 
		{
			printf("Digite un numero: ");
			scanf("%f",&N);
			
			if (N>0)
			{
				p++;
			} else if (N<0)
			{
				n++;
			}
		}while(N>0||N<0);
		printf("\nNumeros positivos: %d",p);
		printf("\nNumeros negativos: %d",n);
		printf("\nDesea utlizar el codigo otra vez?\n(s/n)\n");
		scanf(" %c",&ctrl);
		
	}while(ctrl=='s'||ctrl=='S');
}

