#include<stdio.h>
#include<string.h>

struct informacoes{
	char marca[16],cor[11];
	int ano;
	float preco;	
};
typedef struct informacoes str1;
//Preenche a as informações de cada carro
void preenche(str1 v1[],int q){
	int i;
	for (i=0;i<q;i++){
		printf("Informe a marca do carro:");
		scanf(" %[^\n]",v1[i].marca);
		printf("Informe o ano do carro:");
		scanf("%d",&v1[i].ano);
		printf("Informe a cor do carro:");
		scanf(" %[^\n]",v1[i].cor);
		printf("Informe o preço do carro:");
		scanf("%f",&v1[i].preco);
		printf("\n");
	}
}
//Procura os carros com preco menor ou igual ao preco digitado
void buscacarro (str1 v1[], float p,int *reg){
	
	int i;
	for (i=0;i<*reg;i++){
		if (v1[i].preco <= p){
			printf("%s,%s,%d\n",v1[i].marca,v1[i].cor,v1[i].ano);
		}
	}
}
//procura os carros de marca cor e ano informados
float buscapreco (str1 v1[], char marca[], char cor[], int ano){
	int i;
	for (i=0; i<20;i++){
		if ((v1[i].ano == ano) && (strcmp(v1[i].marca,marca)) == 0 && (strcmp(v1[i].cor,cor) == 0)){
			return v1[i].preco;
		}
		else {
			return 0;
		}
	}
}
int main(){
	str1 vetcarros[20];float p;char marca[10],cor[10];int ano,q,registros=0;
	printf("Informe quantos carros voce vai cadastrar:");
	scanf("%d",&q);
	registros += q;
	preenche(vetcarros,q);
	printf("Informe o preco maximo do carro que voce esta procurando:");
	scanf("%f",&p);
	buscacarro(vetcarros,p,&registros);
	printf("Informe a marca do carro procurado:");
	scanf(" %[^\n]",&marca);
	printf("Informe a cor do carro procurado:");
	scanf(" %[^\n]",&cor);
	printf("Informe o ano do carro procurado:");
	scanf("%d",&ano);
	p = buscapreco(vetcarros,marca,cor,ano);
	printf("%.2f",p);
}