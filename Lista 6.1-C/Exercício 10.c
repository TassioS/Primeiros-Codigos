#include<stdio.h>
#include<math.h>

int main(){
	float S=0; int x,y;
	x = 500;
	y = 2;
	while (y != 27){
		S = S+((float)x/y);
		x = (x-20);
		y = (y++);
	}	
	printf ("%f",S);
}