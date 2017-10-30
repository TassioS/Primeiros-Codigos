#include <stdio.h>
#include <math.h>
int calculo(int x,int y, int operacao){
	if (operacao == 4){
		printf ("Erro. Tente novamente.");
		exit(0);
	}
		if (operacao == 1){
			x = x+y;
			return x;
		}
			if (operacao == 2){
				x = x-y;
				return x;
			}
			else{
				x = x*y;
				return x;
			}
}
int main (){
	int x , y, operacao;
	printf ("Informe o primeiro numero:\n");
	scanf ("%d", &x);
	printf ("Informe o segundo numero:\n");
	scanf ("%d", &y);
	printf ("Qual operacao deseja fazer entre o primeiro e segundo numero?\n");
	printf ("Digite 1 para soma.\nDigite 2 para subtracao.\nDigite 3 para multiplicacao.\nDigite 4 para divisão.\n");
	scanf ("%d", &operacao);
	x = calculo( x , y , operacao);
	printf ("O resultado e:%d", x);
}