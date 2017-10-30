#include <stdio.h>
int main(){
	float c , f ;
	f = 0 ;
	printf ("Digite a temperatura em graus celsius:\n") ;
	scanf ("%f",&c) ;
	f = ((1.8*c)+32) ;
	printf ("%f graus celsius e igual a %f graus fahrenheit",c,f) ;
}