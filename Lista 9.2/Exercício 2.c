#include<stdio.h>
#include<string.h>
int main(){
	char v[80],x;int i,cont=0;
	printf("Digite a cadeia de caracter:\n");
	scanf( " %[^\n]",v);
	printf("Digite a letra a ser conferida:\n");
	scanf( " %c", &x);
	for (i=0;v[i] != '\0';i++){
		if (v[i] == x){
			cont++;
		}
	}
	printf("A letra %c aparece %d vezes.",x,cont);
}