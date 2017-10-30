#include<stdio.h>
int resto (int *x){
	return (*x%10);
}
int main(){
	int r,x;
	printf ("Digite um numero:\n");
	scanf ("%d",&x);
	r = resto(&x);
	x = x/10;
	printf ("O resto e %d e o novo numero e %d",r,x);
}