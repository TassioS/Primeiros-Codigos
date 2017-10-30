#include <stdio.h>
int main(){
	int x,i=1;
	printf ("Informe um numero aleatorio:");
	scanf ("%d", &x);
	if (x < 0){
		while(i != x-1){
			printf ("%d\n", i);
			i = i--;
		}
	}
	else{
		while(i != x+1){
			printf ("%d\n", i);
			i = i++;
		}
	}
}