#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int i,k,n;
	int pa=0,ip=0,ppa=0,pip=0;
	int sp=0,sip=0,spp=0,spip=0;
	float prp=0,prip=0,prpp=0,prpip=0;
	
	printf("Digite la cantidad de elementos de la matriz NxN: ");
	scanf("%d",&n);
	
	int M1[n][n];
	
	
	for(k=0; k<n; k++)
	{
		for(i=0; i<n; i++)
		{
			printf("\nDigite los elementos de la matriz: ");
			scanf("%d",&M1[k][i]);
			if(M1[k][i]%2==0)
			{
				pa++;
				sp=sp+M1[k][i];
			}else 
			{
				ip++;
				sip=sip+M1[k][i];
			}
			
			if(i%2==0)
			{
				ppa++;
				spp=spp+M1[k][i];
			}else
			{
				pip++;
				spip=spip+M1[k][i];
			}
		}	
	}
	prp=(float)sp /pa;
	prip=(float)sip /ip;
	prpp=(float)spp /ppa;
	prpip=(float)spip /pip;
	printf("\nLa suma y el promedio de los # pares es: %d y %.3f",sp,prp);
	printf("\nLa suma y el promedio de los # impares es: %d y %.3f",sip,prip);
	printf("\nLa suma y el promedio de los # de las posiciones pares es: %d y %.3f",spp,prpp);
	printf("\nLa suma y el promedio de los # de las poisiciones impares es: %d y %.3f",spip,prpip);
}
