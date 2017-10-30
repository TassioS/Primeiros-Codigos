#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float raio (float x){
	while (x <= 0){
		printf ("Raio invalido, tente novamente.");
	}
	if (x > 0){
		x = (2*3.1415*x);
		return x;
	}
}
int main(){
	float x, C;
	printf ("Informe o raio da cincunferencia para saber seu comprimento:\n");
	scanf ("%f", &x);
	C = raio(x);
	printf ("O comprimento e:%f",C);
}