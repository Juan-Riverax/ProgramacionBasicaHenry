#include <stdio.h>
#include <stdlib.h>

int main ()
{
char ctrl = 's';	
	do
	{
		
		int n,k, primo=1;
		
		printf("Enter a number: ");
		scanf("%d",&n);
		
		if (n<=0)
		{
			primo=0;
		}
		else
		{
			for(k=2; k<=(n/2); k++)
			{
				if (n % k==0)
				{
					primo=0;
					break;
				}
			}
		}
		
		if (primo)
		{
			printf("\n%d es primo\n",n);
		}
		else
		{
			printf("\n%d no es primo\n",n);
		}
		
		printf("Desea utilizar otro numero?\n(s/n)\n");
		scanf(" %c",&ctrl);
		
	}while(ctrl=='s'||ctrl=='S');
}
