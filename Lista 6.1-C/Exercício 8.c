#include<stdio.h>
int main(){
	int x,qn=1000;
	printf ("Informe a quantia que deseja retirar:\n");
	scanf ("%d",&x);
	while (qn >= 0){
		if ((x < 0) || (qn == 0)){
			printf ("Valor invalido ou notas insuficientes\n");
			exit(0);
		}
		else if(x%10 != 0){
			printf ("O valor deve ser multiplo de 10!\n");
		}
		 	 else if(qn < x/10){
			 	 printf ("Notas insuficientes, restam apenas %d notas de 10 reais.\n",qn);
		 	  }	
		 	 	 else{
				printf ("Retire seu saque de %d notas de 10 reais.\n",x/10);
				qn = qn - (x/10);
			  	  }
    printf ("Informe a quantia que deseja retirar:\n");
	scanf ("%d",&x);
	}			  
}