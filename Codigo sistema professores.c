#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct PROFESSOR {
int codigo; // Código do professor
char nome[40]; // Nome do professor
char titulo; // Titulação do professor
int horas; // Número de aulas/hora semanais
float salario; //Salário bruto
}registros[99];

void cadastro(int *cont, float valor){
	int i;
	if (*cont < 100){
		//Caso um cadastro seja excluido.este for serve para o próximo cadastro ser feito no espaço vago
		for (i=0;i<=*cont;i++){
			if ((registros[i].codigo == 00) && (registros[i].horas == 0) && (registros[i].titulo == '0')){
				printf("Informe o codigo do novo professor:\n");
				scanf("%d",&registros[i].codigo);
				printf("informe o nome do novo professor:\n");
				scanf(" %[^\n]",&registros[i].nome);
				printf("Informe a quantidade de horas/aula semanais:\n");
				scanf("%d",&registros[i].horas);
				printf("Professor adicionado com sucesso!\n");
				registros[i].titulo = 'E';
				registros[i].salario = (registros[i].horas * valor);
				(*cont)++;
				break;		
			}
		}//caso a estrutura acima nao encontre espaços vagos o contador i terá valor maior que *cont então ele irá armazenar no primeiro espaço vago da estrutura
		if (i > *cont){			
			printf("Informe o codigo do novo professor:\n");
			scanf("%d",&registros[*cont].codigo);
			printf("informe o nome do novo professor:\n");
		   	scanf(" %[^\n]",&registros[*cont].nome);
		   	printf("Informe a quantidade de horas/aula semanais:\n");
		   	scanf("%d",&registros[*cont].horas);
		   	printf("Professor adicionado com sucesso!\n");
		   	registros[*cont].titulo = 'E';
		   	registros[*cont].salario = (registros[*cont].horas * valor);
		   	(*cont)++;	
		}	   		
	}
	else {
		printf("Memoria cheia.Impossivel cadastrar novo professor.\n");
	}
}
void pesquisa(int *cont){
	int cod,i;
	printf("Informe o codigo do professor:\n");
	scanf("%d",&cod);
	for (i=0;i<*cont;i++){
		if (cod == registros[i].codigo){
			printf("Codigo:%d\n",registros[i].codigo);
			printf("Professor:%s\n",registros[i].nome);
			printf("Titulo:%c\n",registros[i].titulo);
			printf("Horas/aula semanais:%d\n",registros[i].horas);
			printf("Salario:%.2f\n",registros[i].salario);
			break;
		}
	}
	if (i > *cont){
		printf("Codigo invalido. Tente novamente\n");	
	}
}
void alterat(int *cont, float valorM, float valorD){	
	int i,cod;char titulo;
	printf("informe o codigo do professor:");
	scanf("%d",&cod);
	for (i=0;i<*cont;i++){
		if (registros[i].codigo == cod){
			printf("Professor:%s\nTitulo:%c\n\n",registros[i].nome,registros[i].titulo);
			if (registros[i].titulo == 'E'){
				printf("Informe o novo titulo(M ou D):\n");
				scanf(" %c",&titulo);
				if ((titulo == 'M') || titulo == 'D'){
					registros[i].titulo = titulo;
					printf("Titulo alterado com sucesso.\n");
					if (registros[i].titulo == 'M'){
						registros[i].salario = (registros[i].horas * valorM);
					}
					else
						if (registros[i].titulo == 'D'){
							registros[i].salario = (registros[i].horas * valorD);
						}
					break;
				}
				else{
					printf("Titulo invalido.Tente novamente.\n");
					break;
				}			
			}
			else
				if (registros[i].titulo == 'M'){
					registros[i].titulo = 'D';
					printf("Titulo alterado para D.\n");
					registros[i].salario = (registros[i].horas * valorD);
					break;
				}
				else {
					printf("Impossivel alterar titulo de um doutor.\n");
					break;
				}
		}
	}
	if (i > *cont){
		printf("Codigo invalido. Tente novamente.\n");
	}	
}
void alterah(int *cont,float valorE,float valorM,float valorD){
	int cod,i;
	printf("informe o codigo do professor:\n");
	scanf("%d",&cod);
	for (i=0;i<*cont;i++){
		if (cod == registros[i].codigo){
			printf("Informe a nova quantidade de horas/aula:");
			scanf("%d",&registros[i].horas);
			printf("Horas/aula do professor: %s ajustadas para %d horas\n",registros[i].nome,registros[i].horas);
			if (registros[i].titulo == 'E'){
				registros[i].salario = (registros[i].horas * valorE);
				break;
			}
			else
				if (registros[i].titulo == 'M'){
					registros[i].salario = (registros[i].horas * valorM);
					break;
				}
				else
					if (registros[i].titulo == 'D'){
						registros[i].salario = (registros[i].horas * valorD);
						break;
					}				
		}
	}
	if (i > *cont){
		printf("Codigo invalido. Tente novamente.\n");
	}	
}
void excluir(int *cont){
	int i,cod;
	printf("Informe o codigo do professor a ser excluido:");
	scanf("%d",&cod);
	for (i=0;i<*cont;i++){
		if (cod == registros[i].codigo){
			registros[i].codigo = 0;
			registros[i].horas = 0;
			registros[i].titulo = '0';
			printf("Cadastro excluido com sucesso!\n");
			(*cont)--;
			break;			
		}
	}
	if (i > *cont){
		printf("Codigo invalido. Tente novamente.\n");
	}
		
}
void olerite(int *cont){
	int i;
	for (i = 0;i < *cont;i++){
		printf("Codigo:%d\n",registros[i].codigo);
		printf("Professor:%s\n",registros[i].nome);
		printf("Titulo:%c\n",registros[i].titulo);
		printf("Horas semanais:%d\n",registros[i].horas);
		printf("Salario bruto:%.2f\n",registros[i].salario);
		printf("INSS:%.2f\n",(registros[i].salario * 0.085));
		printf("Imposto de renda:%.2f\n",(registros[i].salario * 0.15));
		printf("Salario liquido:%.2f\n",(registros[i].salario -(registros[i].salario * 0.085 + registros[i].salario * 0.15)));
		printf("****************************************\n");
	}
}
int main(){
	int menu,cont=0;float aulaE=20.40*4.5,aulaM=31.20*4.5,aulaD=42.80*4.5;
	while (0 == 0){
	printf("Informe o numero da operacao que deseja fazer e tecle enter:\n\n");
	printf("1.Incluir novo Professor.\n\n2.Pesquisar dados de um professor\n\n3.");
	printf("Alterar titulo.\n\n4.Alterar numero de horas.\n\n5.Excluir professor.\n\n");
	printf("6.Imprimir folha de pagamento.\n\n7.Encerrar Programa.\n");
	scanf("%d", &menu);	
	if ( menu == 1){
		cadastro(&cont,aulaE);	
	}
	else
		if (menu == 2){
			pesquisa(&cont);	
		}
		else
			if (menu == 3){
				alterat(&cont,aulaM,aulaD);
			}
			else
				if (menu == 4){
					alterah(&cont,aulaE,aulaM,aulaD);	
				}
				else
					if (menu == 5){
						excluir(&cont);
					}
					else
						if (menu == 6){
							olerite(&cont);							
						}
						else
							if (menu == 7){
								exit(0);
							}
							else {
								printf("Opcao invalida. Tente novamente.\n");
							}
	}					
}

