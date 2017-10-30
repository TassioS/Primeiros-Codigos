#include <stdio.h>
int main(){
	char sex,olho,cabelo; float alt; int cod,nasci;
	printf("Informe seu codigo:\n");
	scanf("%d",&cod);
	printf("Informe seu sexo:\n");
	scanf(" %c",&sex);
	printf("Informe a cor dos seus olhos:\n");
	scanf("%c",&olho);
	printf("Informe sua altura:\n");
	scanf(" %f",&alt);
	printf("Informe a cor do seu cabelo:\n");
	scanf(" %c",&cabelo);
	printf("Informe seu ano de nascimento:\n");
	scanf(" %d",nasci);
	while ((nasci < 0)){
		if ((alt == 60) && (nasci > 1992) && ((cabelo == 'L') || (cabelo == 'R')) && (olho == 'A')){
			
		}
	}	
}