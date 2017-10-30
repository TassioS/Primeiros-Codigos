#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void preenche (int m1[][3], FILE *arq){
	int cod,preco,qnt,i=0;
	rewind(arq);
	while (!feof(arq)){
		fscanf(arq,"%d %d %d",&cod,&preco,&qnt);
		printf("Informe a quantidade do produto %d no estoque:",cod);
		scanf("%d",&qnt);
		m1[i][0] = cod; m1[i][1] = preco; m1[i][2] = qnt;
		i++;
	}
}
void desconto (int m1[][3],FILE *arq){
	int i;float dis;
	printf("Informe o valor do desconto:");
	scanf("%f",&dis);
	arq = fopen("produtos.txt","w+");
	for (i=0;i<3;i++){
		if (m1[i][2] > 50){
			m1[i][1] -= m1[i][1]*(dis/100);
		}
		fprintf(arq,"%d %d %d\n",m1[i][0],m1[i][1],m1[i][2]);
	}
	fclose(arq);
}
int main(){
	int m1[3][3],i,j;
	FILE *arq;
	arq = fopen("produtos.txt","a+");
	preenche(m1,arq);
	desconto(m1,arq);
	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			printf("%d ",m1[i][j]);
		}
		printf("\n");
	}
	fclose(arq);
}