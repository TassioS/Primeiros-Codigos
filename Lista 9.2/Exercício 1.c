#include<stdio.h>
#include<string.h>
void main(){
	char v[20],x;int i,cont=0;
	printf("Digite a seq de caracter:\n");
	scanf(" %s",v);
	printf("Digite uma letra:\n");
	scanf(" %c",&x);
	for (i=0 ; v[i] != '\0' ; i++){
		if (v[i] == x){
			cont++;	
		}
	}
	printf("A letra aparece %d vezes.",cont);
}