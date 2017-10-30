#include<stdio.h>
int main(){
	int i , n; float x=0;
	scanf ("%d",&n);
	for ((i=1);(i <= n);(i++)){
		x = x + (float)1/i;
	}
	printf ("%f", x);
}