#include <stdio.h>
#include <stdlib.h>

int main ( )
{
	int k,i,s,n,t,p;
		
	printf("Digite la cantidad de elementos: ");
	scanf("%d",&n);
	
	int M1[n][n];
	
	for(k=0;k<n;k++)
	{
		for(i=0;i<n;i++)
		{
			printf("\nDigite los elementos de la matriz: ");
			scanf("%d",&M1[k][i]);
		}
	}
	
	int max[n];
	
	for(k=0;k<n;k++)
	{
		max[k]=M1[k][0];
		
		for(i=0;i<n;i++)
		{
			if (M1[k][i]>max[k])
			{
				max[k]=M1[k][i];
			}
		}
	}
	
	printf("---- MATRIZ ----\n");
	for(k=0;k<n;k++)
	{
		for(i=0;i<n;i++)
		{
			printf("%4d ",M1[k][i]);
		}
		printf("\n");
	}
	
	t=n*n;
	for(k=0;k<n;k++)
	{
		printf("Los maximos son: %d\n",max[k]);
		s=s+max[k];
	}
	
	printf("\n");
	
	p=0;
	p=(float)s/t;
	
	printf("La media de los maximos es: %d",p);
}
