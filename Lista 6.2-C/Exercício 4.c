#include <stdio.h>
#include <math.h>
#include<locale.h>
float bask (float a,float b,float c){
	float x1, x2 ;
	if ((a == 0) || (((pow(b,2))-4*a*c)) < '0'){
		printf ("Nao existem raizes reais para essa funcao.");
		exit(0);
	} 
	else{
		x1 = (-b)+pow((pow(b,2))-(4*a*c),1/2)/(2*a);
		x2 = (-b)-sqrt((pow(b,2))-(4*a*c))/(2*a);
	}
	printf("As raizes sao %f e %f",x1,x2);
}
int main(){
	float a ,b ,c, x1, x2;
	printf("Insira o valor de a:\n");
	scanf("%f",&a);
	printf("Insira o valor de b:\n");
	scanf("%f",&b);
	printf("Insira o valor de c:\n");
	scanf("%f",&c);
	x1, x2 = bask(a, b, c);
}