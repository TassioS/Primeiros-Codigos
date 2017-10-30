#include <stdio.h>
void num(int x, int y, int z){
	if ((x<y) && (x<z)){
		if (y<z){
			printf ("%d %d %d", x,y,z);
		}
		else{
			printf ("%d %d %d", x,z,y);
		}
	}
	if ((y<x) && (y<z)){
		if (x<z){
			printf ("%d %d %d", y,x,z);
		}
		else{
			printf ("%d %d %d", y,z,x);
		}
	}
	if ((z<x) && (z<y)){
		if (x<y){
			printf ("%d %d %d", z,x,y);
		}
		else{
			printf ("%d %d %d", z,y,x);
		}
	}		
}
int main(){
	int x , y , z;
	printf ("Informe o primeiro numero:\n");
	scanf ("%d",&x);
	printf ("Informe o segundo numero:\n");
	scanf ("%d",&y);
	printf ("Informe o terceiro numero:\n");
	scanf ("%d",&z);
	num(x ,y ,z);	
}