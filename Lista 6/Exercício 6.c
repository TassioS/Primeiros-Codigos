#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float media(float x, float y){
	x = (((x*6)+(y*4))/10);
	return x;
}
int main (){
	float x,y;
	printf ("Informe a n1:\n");
	scanf ("%f", &x);
	printf ("Informe a n2\n");
	scanf ("%f", &y);
	x = media(x,y);
	printf ("A media e:%f",x);
}