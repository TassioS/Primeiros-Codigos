#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main(){
	int i,a=37,b=38;float s=0;
	for ((i=1);(i<=37);(i++)){
		s = s+((float)(b*a)/i);
		b = b--;
		a = a--;   	
	}
	printf("O resultado da soma e:%f",s);
}