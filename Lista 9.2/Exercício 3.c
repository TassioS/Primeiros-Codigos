#include<stdio.h>
int contador(char vc[]){
	int i,j=0;
	for (i=0;vc[i] != '\0';i++){
		j++;
	}
	return j;
}
int main(){
	char vc[20];int x;
	printf("Digite a cadeia de caracter:");
	scanf(" %[^\n]",vc);
	x = contador(vc);
	printf("A cadeia contem %d caracteres",x);
}