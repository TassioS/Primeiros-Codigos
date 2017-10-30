#include<stdio.h>
void aux(int x , int *maior , int *menor){
    if (x >= *maior){
        *maior = x;
    }
    else if(x < *menor){
        *menor = x;
    }
}
int main(){
    int n,maior=0,menor=0,x,i;
    printf("Informe a quantidade de numeros da sequencia:\n");
    scanf("%d",&n);
    for ((i=1);(i<=n);i++){
        printf("Digite um numero:\n");
        scanf("%d",&x);
        aux(x,&maior,&menor);
        if (menor > x){
            menor = x;
        }
    }
    printf("O maximo e:%d e o minimo e:%d",maior,menor);
}