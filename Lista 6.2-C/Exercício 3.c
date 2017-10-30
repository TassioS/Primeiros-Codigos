#include <stdio.h>
	int main(){
		int copias , paginas , id , idaux , custof , custop , custoaux ;
		custop=0; 
		custoaux=0;
		idaux=0;
		printf ("Informe o identificador do livro:");
		scanf ("%d", &id);
		while ( id >= 0 ){
			printf ("Informe o custo fixo:");
			scanf ("%d", &custof);
			printf ("Informe a estimativa do numero de copias:");
			scanf ("%d", &copias);
			printf ("Informe o numero de paginas:");
			scanf ("%d", &paginas);
			custop = custof+(copias*paginas);
			printf ("O custo de producao deste livro e de %d\n", custop);
			if ( custop > custoaux){
				custoaux = custop;
				idaux = id;
			} 
			printf ("Informe o identificador do livro:");
			scanf ("%d", &id);   	
		}
		printf ("O livro de id %d e tem o maior custo de producao que e %d", idaux , custoaux );
	}