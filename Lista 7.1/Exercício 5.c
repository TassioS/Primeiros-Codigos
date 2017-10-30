#include <stdio.h>
#include <math.h>
float media (float n1, float n2, float n3, char tipo){
	float x;
	if ((tipo == 'a') || (tipo == 'A')){
		x = ((n1+n2+n3)/3);
	}
	else{
		x = (((n1*5)+(n2*3)+(n3*2))/10);
	}
	return x;
}
int main(){
	float n1 , n2 , n3; char tipo;
	printf ("Informe a n1:\n");
	scanf ("%f", &n1);
	printf ("Informe a n2:\n");
	scanf ("%f", &n2);
	printf ("Informe a n3:\n");
	scanf ("%f", &n3);
	fflush(stdin);
	printf ("Digite A para media aritmetica ou P para media ponderada:\n");
	scanf ("%c", &tipo);
	n1 = media(n1 , n2 , n3 , tipo);
	printf ("Sua media e %f",n1);
}
