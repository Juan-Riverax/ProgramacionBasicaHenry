#include <stdio.h>

int main(){
	int n,c,k;
	
	do{
		printf("Digite la cantidad de elementos que van a tener los vectores: ");
		scanf("%d",&n);
	
		int v1[n],v2[n],v3[n];
		
		for(c=0;c<n;c++){
			printf("\nDigite el elemento para el vector 1: ");
			scanf("%d",&v1[c]);
			printf("\nDigite el elemento para el vector 2: ");
			scanf("%d",&v2[c]);
		}
	
		for(c=0;c<n;c++){
			v3[c]=v1[c]+v2[c];
		}
		printf("La suma de los elementos de cada vector es: \n");
		for(c=0;c<n;c++){
			printf("%d ",v3[c]);
		}
		
		printf("\nDesea volver a ejecutar el programa?\n1)Si\n0)No\n");
		scanf("%d",&k);
	}while(k==1);
}
