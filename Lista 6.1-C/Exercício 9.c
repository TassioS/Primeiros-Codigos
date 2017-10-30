#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	int ano;float povobr, povoeua;
	povobr = 1000;
	povoeua = 25000;
	printf ("Informe o ano:\n");
	scanf ("%d",&ano);
	while (povobr != povoeua){
		   povobr = povobr*1.04;
		   povoeua = povoeua*1.02;
		   ano = ano++;	
	}
	printf ("A populacao sera igual no ano de:%d",ano);
}