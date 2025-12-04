#include <stdio.h>
#include <stdlib.h>

int main ( )
{
	int i,k,n;
	
	printf("Digite la cantidad de elementos de la matriz: ");
	scanf("%d",&n);
	
	int m1[n][n];
	for(k=0;k<n;k++)
	{
		for(i=0;i<n;i++)
		{
			printf("\nDigite los elementos de la matriz: ");
			scanf("%d",&m1[k][i]);
		}
	}
	
	int max[n];
	
	
	for(k=0;k<n;k++)
	{
		max [k]=m1[k][0];
		for(i=0;i<n;i++)
		{
			if(m1[k][i]>max[k])
			{
				max[k]=m1[k][i];
			}
		}
	}
	
	printf("MATRIZ\n");
	for(k=0;k<n;k++)
	{
		for(i=0;i<n;i++)
		{
		printf("%d ",m1[k][i]);	
		}
		printf("\n");
	}
	
	printf("Maximos:\n");
	for(k=0;k<n;k++)
	{
		printf("%d ",max[k]);
		printf("\n");	
	}
}
