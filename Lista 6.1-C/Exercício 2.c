#include <stdio.h>
int main(){
	int num1, num2, aux;
	printf ("Digite um numero aleatorio:\n");
	scanf ("%d", &num1);
	printf ("Digite outro numero aleatorio\n");
	scanf ("%d", &num2);
	if (num1 > num2){
		aux = num1; num1 = num2; num2 = aux; 
	}
	//printf ("%d\n%d", num1,num2);
}