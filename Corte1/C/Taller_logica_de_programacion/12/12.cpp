#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int N,cont,res=0;
	char k='s';
	
	do
	{
	printf("Digite el numero deseado:\n");
	scanf("%d",&N);
		
		for (cont=1; cont<=10; cont++)
		{
			res=N*cont;
			printf("\n%d x %d = %d\n",N,cont,res);
		}
		printf("\nDesea realizarlo otra vez?\n");
		scanf(" %c",&k);
		
	} while (k=='s'||k=='S');
	
}
