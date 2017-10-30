#include<stdio.h>
#include<string.h>
void faux(int N,int v1[]){
	char v2[51];int i,k;
	for (i=0;i<N;i++){
		printf("Informe a cadeia de caracter:\n");
		scanf(" %[^\n]",v2);
		v1[i] = strlen(v2);
	}
}
int main(){
	int N,v1[10]={0,0,0,0,0,0,0,0,0,0},i;
	printf("Informe N:");
	scanf("%d",&N);
	faux(N,v1);
	for (i=0;i<N;i++){
		printf("%d ",v1[i]);
	}
}