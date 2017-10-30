#include<stdio.h>
int main(){
	float S=0; int i,x=2;
	for ((i=1);(i<=10);(i++)){
		if (i%2 == 0){
			S = S + (i/x);	
		}
		else {
			S = S - (i/x);
		}
		x = x + 2;
	}
	printf ("%.2f",S);
}