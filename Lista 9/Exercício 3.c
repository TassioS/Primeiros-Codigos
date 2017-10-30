#include<stdio.h>
int main(){
	int cod[10],qt[10],i,id,codi,qnt;
	for (i=0;i<10;i++){
		cod[i] = i+1;															//preencher vetor cod
		qt[i] = 85;																//preencher quantidade de produtos
	}
	printf("Informe seu codigo de cliente:\n");
	scanf(" %d", &id);
	if(id == 0){
		exit(0)	;																//finalizar execução caso codigo cliente = 0
	}
	else{
		while(id != 0){
			printf("Informe o codigo do produto:\n");
			scanf(" %d",&codi);
			printf("Iforme a quantiadde que deseja comprar:\n");
			scanf(" %d",&qnt);
			for(i=0;i<10;i++){													//varrer o vetor cod
				if((codi == cod[i])){											//verificar se o codigo digitado existe 
					if(qnt <= qt[i]){											//verificar a quantidade que o cliente deseja
						printf("Pedido atendido. Obrigado e volte sempre.\n");
						qt[i] = qt[i] - qnt;									//atualizar a quantidade no estoque
					}
					else{
						printf("Não temos estoque suficiente dessa mercadoria.\n");
					}		
				}
			}
			if((codi < 1) || (codi > 10)){										//caso codigo nao exista
				printf("Codigo Inexistente.\n");
			}
			printf("Informe seu codigo de cliente:\n");							//reiniciar a comprar informando codigo de cliente
			scanf(" %d", &id);
		}
	}
	for (i=0;i<10;i++){
		printf("Produto de codigo %d existem %d unidades restantes\n",cod[i],qt[i]);
	}	
}