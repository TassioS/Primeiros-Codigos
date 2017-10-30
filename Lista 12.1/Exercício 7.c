#include<stdio.h>
//Função para preencher a matriz:
void preenchematriz (int mat[5][4]){
	int i,j;
	for (i=0;i<5;i++){
		for (j=0;j<4;j++){
			if (i < 4){
			printf("Informe a quantidade do produto %d no armazen %d:",j+1,i+1);
			scanf("%d",&mat[i][j]);
			}
			else {
				printf("informe o preco do produto %d:",j+1);
				scanf("%d",&mat[i][j]);
			}
		}	
	}	
}
//função para calcular a quantidade total em cada armazem
void qtotal (int mat[5][4]){
	int soma[4]={0,0,0,0},i,j;
	for (i=0;i<4;i++){
		for (j=0;j<4;j++){
			soma[i] = soma[i] + mat[i][j];
		}
		printf("O armazem %d possui %d itens no total.\n",i+1,soma[i]);
	}
}
//função para calcular qual armazem tem mais produto 2
void maiorqb (int mat[5][4]){
	int i,a=0,aux=mat[0][1];
	for (i=1;i<4;i++){
		if ( mat[i][1] >= aux){
			aux = mat[i][1];
			a++;
		}		
	}
	printf("O armazem %d possui o maior estoque do produto 2.\n",a+1);
}
//função para calcular qual armazem tem menos produto 4
void menorqc (int mat[5][4]){
	int i,a=0,aux=mat[0][3];
	for (i=1;i<4;i++){
		if (mat[i][3] <= aux){
			aux = mat[i][3];
			a++;
		}
	}
	printf("O armazem %d possui o menor estoque do produto 4.\n",a+1);
}
//Função para calcular o custo total de cada produto
void custot (int mat[5][4]){
	int soma[4]={0,0,0,0},i,j;
	for (i=0;i<4;i++){
		for (j=0;j<4;j++){
			soma[i] = soma[i] + mat[j][i];
		}
		printf("O custo total do produto %d e %d.\n",i+1,soma[i]*mat[4][i]);
	}
}
//Função para calcular o custo total de cada armazem
void custoa (int mat[5][4]){
	int soma[4]={0,0,0,0},i,j;
	for (i=0;i<4;i++){
		for (j=0;j<4;j++){
			soma[i] = soma[i]+mat[i][j]*mat[4][j];
		}
		printf("O custo total de cada armazem e: %d.\n",soma[i]);
	}
}
//função principal
int main(){
	int mat[5][4];
	preenchematriz(mat);
	qtotal(mat);
	maiorqb(mat);
	menorqc(mat);
	custot(mat);
	custoa(mat);
}