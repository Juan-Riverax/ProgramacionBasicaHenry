 #include <stdio.h>
 #include <stdlib.h>
 
 int main ( )
 {
 	int attempts=0;
 	char contr [50];
 	char contrR[]="Pepegrillo";
 	int k=0;

		do
		{
			printf("Digite la contraseña\n");
			scanf("%s",&contr);
			
			for(k=0; k<9; k++)
			{	
				if(contrR[k]==contr[k])
				{
					printf("Correcto\n");
					
				}
				else 
				{
					printf("Incorrecto\n");
					attempts++;
				}
				
				if(contrR==contr)
				{
					exit(0);
				}
			}
		} while (attempts<3);
 }
