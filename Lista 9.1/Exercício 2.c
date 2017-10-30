#include<stdio.h>
void somador (int v1[],int v2[]){
	int i;
	for (i=0;i<30;i++){
		v2[i] += v1[i];
	}
}
int main(){
	int v1[30],v2[30],i;
	for (i=0;i<30;i++){
		v1[i] = (i+1)*(i+1);
		v2[i] = (i+2)*(i+2);
		printf("%d ",v2[i]);
	}
	somador(v1,v2);
	for (i=0;i<30;i++){
		printf("\n%d",v2[i]);
	}
}