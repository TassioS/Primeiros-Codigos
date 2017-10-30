#include<stdio.h>
void tempo (int min, int *h,int *m){
	*h = min/60;
	*m = min%60;
	printf ("A hora e %d:%d",*h,*m);
}
int main(){
	int min,h,m;
	printf ("Informe quantos minutos se passaram desde 0h.\n");
	scanf ("%d", &min);
	tempo(min,&h,&m);
}