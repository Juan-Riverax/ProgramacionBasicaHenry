#include <stdio.h>

int main (){
	int n,c,s=0,k;
	float p;
	do{
		printf("Digite la cantidad de elementos del vector: ");
		scanf("%d",&n);
	
		int v[n];
	
		for(c=0;c<n;c++){
			printf("Digite el elemento: ");
			scanf("%d",&v[c]);
		}
		
		s=0;
		
		for(c=0;c<n;c++){
			s=s+v[c];
		}
	
		p= (float) s/n;
		printf("La suma de los elementos es: %d\nEl promedio de los elementos es: %.2f\n",s,p);
		
		printf("Desea volver a correr el programa?\n1)Si\n0)No\n");
		scanf("%d",&k);
	}while(k==1);
	
}
