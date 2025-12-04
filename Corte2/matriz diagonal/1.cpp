#include <stdio.h>
#include <stdlib.h>

int main ( )
{
	int k,i,n;
	printf("La matriz es de forma NxN. Indique la cantidad de espacios: ");
	scanf("%d",&n);
	
	int M1[n][n];
	
	for (k=0;k<n;k++)
	{
		for(i=0;i<n;i++)
		{
			printf("\nDigite los elementos de la matriz: ");
			scanf("%d",&M1[k][i]);
		}
	}
	
	printf("\n-----MATRIZ 1-----\n");
	for (k=0;k<n;k++)
	{
		for(i=0;i<n;i++)
		{
			printf("%4d ",M1[k][i]);
		}
		printf("\n");
	}
	
	int M2[n][n];
	
	for (k=0;k<n;k++)
	{
		for(i=0;i<n;i++)
		{
			if(k==i)
			{
				M2[k][i]=0;
			}
			else
			{
				M2[k][i]=M1[k][i];
			}
		}
	}
	
	printf("\n-----MATRIZ 2-----\n");
	for (k=0;k<n;k++)
	{
		for(i=0;i<n;i++)
		{
			printf("%4d ",M2[k][i]);
		}
		printf("\n");
	}

	int M3[n][n];
	
	for (k=0;k<n;k++)
	{
		for(i=0;i<n;i++)
		{
			if(k<=i)
			{
				M3[i][k] = M2[k][i]+M2[i][k];
				M3[k][i]=0;
			}
		}
	}
	
	printf("\n-----MATRIZ 3-----\n");
	for (k=0;k<n;k++)
	{
		for(i=0;i<n;i++)
		{
			printf("%4d  ",M3[k][i]);
		}
		printf("\n");
	}
}
