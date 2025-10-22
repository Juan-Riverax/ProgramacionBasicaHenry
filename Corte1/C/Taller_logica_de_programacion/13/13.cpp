#include <stdio.h>
#include <stdlib.h>

int main ( )
{
	char chi='s';
	do
	{
		printf("Digite un dato:\n");
		float N=0,suma=0,pro=0;
		int ctrl=0;
			do
			{
				scanf("%f",&N);
				if(N>=0)
				{
					suma=N+suma;
					ctrl++;
				}	
			}while(N>=0);
			
		if (ctrl>0)
		{
			pro=suma/ctrl;
			printf("El promedio es: %f\n",pro);
		} else
		{
			printf("Input invalido.\n");
		}
	printf("\nDesea realizar otro promedio?\n(s/n)\n");
	scanf(" %c",&chi);			
	}while(chi=='s'||chi=='S');
}
