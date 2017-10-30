#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct tAluno {
int codigo;
char nome[50];
}cliente;
void salvarc(FILE *arq){
	cliente x;
	printf("Digite o codigo do cliente:");
	scanf("%d",&x.codigo);
	printf("Informe o nome do cliente:");
	scanf(" %[^\n]",x.nome);
	fprintf(arq,"%d %s\n",x.codigo,x.nome);
}
void imprimirc(FILE *arq){
	int cod;char nome[50];
	rewind(arq);
	fscanf(arq,"%d %[^\n]",&cod,nome);
	while (!feof(arq)){
		printf("Codigo: %d Cliente: %s\n",cod,nome);
		fscanf(arq,"%d %[^\n]",&cod,nome);
	}
}
void busca(FILE *arq){
	char nome[50],nome1[50]; int cod;
	rewind(arq);
	printf("Digite o nome do cliente:");
	scanf(" %[^\n]",nome1);
	while(!feof(arq)){
		fscanf(arq,"%d %[^\n]",&cod,nome);
		if (!strcmp(nome,nome1)){
			printf("Codigo:%d\n",cod);
			break;
		}
	}
}

int main(){
	int i;
	FILE *arq;
	arq = fopen("Clientes.txt","a+");	
	if (arq == NULL){
		printf("Arquivo invalido.");
		exit(0);
	}
	printf("Digite:\n[1]-Para cadastrar um cliente\n[2]-Para imprimir os dados dos um clientes\n[3]-Para buscar um cliente\n[0]-Para finalizar a execucao\n");
	scanf("%d",&i);
	switch (i){
		case 1:
			salvarc(arq);
			break;
		case 2:
			imprimirc(arq);
			break;
		case 3:
			busca(arq);
			break;			
	}
}