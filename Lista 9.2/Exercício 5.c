#include<stdio.h>
#include<string.h>
void confere (char v1[],char v2[]){
	if (strcmp(v1,v2) == 0 && strcmp(v2,v1) == 0){
		printf("%d",1);
	}
	else {
		printf("%d",0);
	}
}
int main(){
	char v1[101],v2[101];
	printf("Informe a primeira cadeia:");
	scanf(" %[^\n]",v1);
	printf("Informe a segunda cadeia:");
	scanf(" %[^\n]",v2);
	confere(v1,v2);
}