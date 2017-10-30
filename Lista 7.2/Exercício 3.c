#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void calculo (float *x,int y){
	   *x = *x+(*x*((float)y/100));	
}
int main(){
	float valor; int taxa;
	printf ("Digite o valor do produto:\n");
	scanf ("%f",&valor);
	printf ("Digite o percentual de aumento:\n");
	scanf ("%d",&taxa);
	calculo(&valor,taxa);
	printf("O valor final e %.2f",valor);
}