#include <stdio.h>
#include <stdlib.h>

int main ( )
{
	int k,i,n,m;
		
	printf("Digite la cantidad filas y columnas: ");
	scanf("%d %d",&n,&m);
	
	float M1[n][m];
	
	for(k=0;k<n;k++)
	{
		for(i=0;i<m;i++)
		{
			printf("\nDigite los elementos de la matriz: ");
			scanf("%f",&M1[k][i]);
		}
	}
	
	printf("\n");
	
	float sf[n];
	float sc[m];
	
	for(k=0;k<n;k++)
	{
		sf[k]=0;
		for(i=0;i<m;i++)
		{
			sf[k]=sf[k]+M1[k][i];
			
		}
	}
	printf("\n");
	
	
	
	for(i=0;i<m;i++)
	{
		sc[i]=0;
		for(k=0;k<n;k++)
		{
			sc[i]+=M1[k][i];
		}
	}
	
	for(k=0;k<n;k++)
	{
		for(i=0;i<m;i++)
		{
			printf("%.3f ",M1[k][i]);
		}printf("= %.3f",sf[k]);printf("\n");
	}
	
	printf("\n");
	
	for(i=0;i<m;i++)
	{
		printf("%.3f ",sc[i]);
	}
}
