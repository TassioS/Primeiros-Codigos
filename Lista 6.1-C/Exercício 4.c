#include <stdio.h>
int main(){
	float x;
	printf ("Informe seu salario:\n");
	scanf ("%f", &x);
	if ( x <= 300){
		x = x*1.5;
	}
	else{
		x = x*1.3;
	}
	printf ("O salario reajustado e:%f", x);
}