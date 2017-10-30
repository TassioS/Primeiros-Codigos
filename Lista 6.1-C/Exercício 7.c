#include<stdio.h>
int main(){
	int x;
	printf ("Digite um numero:\n");
	scanf ("%d",&x);
	while (x >= 0){
		if ((x%10) == 0){
			printf ("O numero e divisor de 10.\n");
		}
		printf ("Digite um numero:\n");
		scanf ("%d",&x);
	}
}