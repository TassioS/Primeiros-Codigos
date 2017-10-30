#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int i , x=1; float s=0;
	for ((i=1);(i<=50);(i++)){
		s = s+((float)(x)/(i));
		x = x+2;
	}
	printf ("%f",s);
}