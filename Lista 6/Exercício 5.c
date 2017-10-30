#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float distance (float xa, float xb, float ya, float yb){
	xa = sqrt(pow(xb-xa,2)+pow(yb-ya,2));
	return xa;
}
int main (){
	float xa, xb, ya, yb;
	printf ("Informe as cordenadas dos pontos A e B:\nPonto A:\nx:");
	scanf ("%f", &xa);
	printf ("y:");
	scanf ("%f", &ya);
	printf ("Ponto B:\nx:");
	scanf ("%f", &xb);
	printf ("y:");
	scanf ("%f", &yb);
	xa = distance(xa,xb,ya,yb);
	printf ("A distancia entre os pontos A e B e: %f",xa);
}