#include <stdio.h>
int main(){
	float n1,n2,exame;
	printf ("Informe sua n1.\n");
	scanf ("%f", &n1);
	printf ("Informe sua n2.\n");
	scanf ("%f", &n2);
	if ((n1+n2)/2 >= 6){
		printf ("Aprovado.");
	}
	else{
		if((n1+n2)/2 < 3){
			printf ("Reprovado.");
		}
		else{
			printf ("Exame!\nInforme sua nota no exame:\n");
			scanf ("%f", &exame);
			if (exame >= 6){
				printf ("Aprovado.");
			}
			else{
				printf ("Reprovado.");
			}
		}
	}
}