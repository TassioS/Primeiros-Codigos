#include<stdio.h>

int main(){
	int mat[2][2]={1,2,3,4},i,j;
	for (i=0;i<2;i++){
		for (j=0;j<2;j++){
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
	printf("A soma da diagonal principal e: %d.",mat[0][0]+mat[1][1]);
}