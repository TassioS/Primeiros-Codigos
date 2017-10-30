#include <stdio.h>
#include<math.h>
	int main(){
		int i , Seq , n ;
		i=1;
		Seq=0;
		printf ("Informe o valor de n:");
		scanf ("%d", &n);
		for (i=1 ; (i<=n) ; i++){
			Seq = ((i^2)*((i-1)*(i-1)));
			printf ("%d\n", Seq);			
		}
	}	
