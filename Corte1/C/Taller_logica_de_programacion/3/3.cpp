#include <stdio.h>
#include <stdlib.h>

int main( )
{
	char N[50];
	float H,PH,Sb,R,Sn;
	
		printf("Digite su nombre completo\n");
		scanf("%[^\n]", N);
		
		printf("Digite el numero de horas trabajadas\n");
		scanf("%f",&H);
		
		printf("Digite el precio cobrado por hora\n");
		scanf("%f",&PH);
		
			R= (H*PH)*0.05;
			Sb= H*PH;
			Sn= Sb-R;
			
		printf("Sueldo Bruto: %.2f\n", Sb);
		printf("Retencion: %.2f\n", R);
		printf("Sueldo Neto: %.2f\n", Sn);


	
}


