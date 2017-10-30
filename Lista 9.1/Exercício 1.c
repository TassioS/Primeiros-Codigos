#include<stdio.h>
void troca(int v[],int n){
	int i;
	for (i=0;i<n;i++){
		if (v[i] < 0){
			v[i] = 0;
		}
	}
}
int main(){
	int v1[10]={1,-2,3,-4,5,-6,7,-8,9,-10},i;
	for (i=0;i<10;i++){
		printf("%d ",v1[i]);
	}
	printf("\n");
	troca(v1,10);
	for (i=0;i<10;i++){
		printf("%d ",v1[i]);
	}
}