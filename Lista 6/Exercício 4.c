#include <stdio.h>
#include <math.h>
int main(){
	float a, b, c, x1, x2;
	printf ("Informe o valor da constante A:\n");
	scanf ("%f", &a);
	printf ("Informe o valor da constante B:\n");
	scanf ("%f", &b);
	printf ("Informe o valor da constante C:\n");
	scanf ("%f", &c);
	if ((a == 0) || ((pow(b,2)-(4*a*c))) < 0){
		printf ("A equacao nao possui raizes reais.");
	}
	else {
		x1 = (-b + sqrt(pow(b,2)-(4*a*c)))/(2*a);
		x2 = (-b - sqrt(pow(b,2)-(4*a*c)))/(2*a);
		printf ("As raizes x1 e x2 sao %f e %f", x1 , x2);
	}
	
}