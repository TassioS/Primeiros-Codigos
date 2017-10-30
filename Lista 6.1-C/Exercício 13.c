#include<stdlib.h>
#include<stdio.h>
#include<math.h>
double fatorial (double x){
	double fat=1,i;
	for (i=x; i > 0;i--){
		fat = fat*i;		
	}
	return fat;
}
int main(){
	double cos=0, x; int y=2,i;
	printf ("Informe o valor do angulo:\n");
	scanf ("%f",&x);
	for ((i=1);(i<=9);(i++)){
		if (i%2 == 0){
			cos = cos - pow(x,y)/fatorial(y);
			y = y+2;
		}
		else{
			cos = cos + (pow(x,y)/fatorial(y));
			y = y+2;
		}		  		  		   	
	}
	cos = cos+1;
	printf ("A soma dos 10 primeiros termos e:%f",cos);
}