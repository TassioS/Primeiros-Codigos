#include<stdio.h>
#include<math.h>
int main(){
	int v1[10],v2[5],v3[5],v4[5],i,j=0,k=0,aux=0;
	for (i=0;i<10;i++){
		v1[i] =  (i+1)*(i+1); 													//preencher v1
	}
	for (i=0;i<5;i++){ 
		v2[i] = i+1; 															//preencher v2
		aux = aux + v2[i]; 														// fazer somatorio de todos os valores de v2
	}
	for (i=0;i<10;i++){ 														//varrer o vetor v1
		if (v1[i]%2 == 0){ 														//verificar quais elementos de v1 são pares
			v3[j] = v1[i] + aux; 												//atribuir o valor do elementor v1[i] + o somatorio dos valores de v2 a v3[j]
			j++;
		//	printf ("%d\n",v3[j-1]);
		}
	}
	for(i=0;i<10;i++){
		aux=0;
		if (v1[i]%2 != 0){ 														//Essa linha é para selecionar apenas os numeros impares do vetor v1
			for(j=0;j<5;j++){ 													//Varrer o vetor v2
				if ((v1[i]%v2[j]) == 0){ 										//Essa linha é para verificar quais elementos do vetor v2 são divisores do elemento v1[i] 
					aux++;														//incrementar o contador de divisores
				}
			}
			v4[k] = aux;
			k++;
		//	printf("%d",v4[k-1]);
		}
	}
}