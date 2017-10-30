#include<stdio.h>
#include<string.h>
typedef struct nascimento{
	int ano,mes;
}data;
typedef struct manada{
	int codigo;
	float leite,racao;
	data nasc;
	char abate;
}gado;
//Adiciona informacoes de um boi/vaca ao sistema
void preenche(gado v1[]){
	int i;
	for (i=0;i<2;i++){
		printf("Informe o codigo do bovino a ser cadastrado:");
		scanf("%d",&v1[i].codigo);
		printf("informe a quantidade de leite produzida por semana:");
		scanf("%f",&v1[i].leite);
		printf("Informe a quantidade de racao semanal consumida:");
		scanf("%f",&v1[i].racao);
		printf("Informe o ano e o mes de nascimento do bovino:");
		printf("ano:");
		scanf("%d",&v1[i].nasc.ano);
		printf("Mes:");
		scanf("%d",&v1[i].nasc.mes);
	}
}
//Define quais animais devem ir para o abate
void abate(gado v1[]){
	int i;
	for (i=0;i<2;i++){
		if (v1[i].nasc.ano < 2012 || v1[i].leite < 40 || ((v1[i].leite >= 50 && v1[i].leite <= 70) && v1[i].racao > 50)){
			v1[i].abate = 'S';
		}
		else {
			v1[i].abate = 'N';
		}
	}
}
int main(){
	gado v1[5];
	preenche(v1);
	abate(v1);

}