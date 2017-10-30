#include<stdio.h>
void pos (int *a, int *b,int *c){
	if ((*a>*b) && (*b>*c)){
		*a = 1; *b = 3;
	}
	else if ((*a>*b) && (*b<*c) && (*c<*a)){
		*a = 1; *b = 2;
	}	
		else if ((*b>*a) && (*a>*c)){
			*a = 2; *b = 3;
		}
			else if ((*b>*a) && (*a<*c) && (*c<*b)){
				*a = 2; *b = 1;
			}
				else if ((*c>*a) && (*a>*b)){
					*a = 3; *b = 2;
				}
					else {
						*a = 3; *b = 1;
					}
}
int main(){
	int a , b , c , i;
	for (i=1;i<=3;i++){
		printf ("Informe um numero:\n");
		if (i == 1){
			scanf("%d",&a);
		}
		else if (i == 2){
			scanf("%d",&b);
		}
		else{
			scanf("%d", &c);
		}
	}
	pos(&a,&b,&c);
	printf("O maior termo e o %d e o menor termo e o %d",a,b);
}