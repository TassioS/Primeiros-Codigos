#include<stdio.h>
int main(){
	int m,n,i;
	printf ("Escreva um numero aleatorio:\n");
	scanf ("%d",&n);
	printf ("Informe outro numero maior que o anterior:\n");
	scanf ("%d",&m);
	for (i=n;i<m;i++){
		if(i%2 == 0){
			printf ("%d\n", i);
		}
	}	
}