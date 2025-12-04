#include <stdio.h>
#include <stdlib.h>

int main ( )
{
	int k,i,n,m,max,min,s=0,t;
	float pr;
	
	printf("Digite la cantidad de filas y columnas respetivamente: ");
	scanf("%d %d",&n,&m);
	
	int M1[n][m];
	
	t=n*m;
	
	for(k=0;k<n;k++)
	{
		for(i=0;i<m;i++)
		{
			printf("Digite los elementos de la matriz: ");
			scanf("%d",&M1[k][i]);
		}
	}
	
	max=M1[0][0];	
	for(k=0;k<n;k++)
	{ 
		for(i=0;i<m;i++)
		{
			if(M1[k][i]>max)
			{
				max=M1[k][i];
			}
		}
	}
	
	min=M1[0][0];
	
	for(k=0;k<n;k++)
	{
		for(i=0;i<m;i++)
		{
			if(M1[k][i]<min)
			{
				min=M1[k][i];
			}
		}
	}
	
	pr=0;
	s=0;
	
	for(k=0;k<n;k++)
	{
		for(i=0;i<m;i++)
		{
			s=s+M1[k][i];
		}
	}
	
	pr=(float)s /t;
	
	printf("El valor maximo de la matriz: %d\n",max);
	printf("El valor minimo de la matriz: %d\n",min);
	printf("La media la matriz: %.3f",pr);
}

