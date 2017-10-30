#include<stdio.h>
int main (){
	int x ,y, z=0;
	printf ("Digite dois numeros:");
	scanf ("%d %d",&x,&y);
	while (y%x == 0){
		z = z++;
		y = y/x;

	}
	printf ("O primeiro numero divide o segundo numero %d vezes",z);
}