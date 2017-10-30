#include <stdio.h>
int main(){
	int i , x , x2;
	x = 0;
	x2 = 0;
	for (i=1 ; i<=20 ; i++){
		 x = x+i ;
		 x2 = x+(i^2);
	
	  }
	printf ("%d\n%d", x, x2);
}