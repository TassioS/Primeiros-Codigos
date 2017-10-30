#include<stdio.h>
void troca(int *x, int *y){
	int aux;
	aux = *x;
	*x = *y;
	*y = aux;	
}
int main(){
	int x , y;
	printf ("Digite x:\n")/
	scanf ("%d",&x);
	printf ("Digite y:\n");
	scanf ("%d",&y);
	troca (&x,&y);
	printf ("%d , %d",x,y);
}