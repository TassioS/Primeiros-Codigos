#include<stdio.h>
void aux (int *x){
	if ((*x%100)%10 == 0){
		printf ("Zero ");
	}
	else
		if ((*x%100)%10 == 1){
			printf ("Um ");
		}
		else
			if ((*x%100)%10 == 2){
				printf ("Dois ");
			}
			else
				if ((*x%100)%10 == 3){
					printf ("Tres ");
				}
				else
					if ((*x%100)%10 == 4){
						printf ("Quatro ");
					}
					else
						if ((*x%100)%10 == 5){
							printf ("Cinco ");
						}
						else
							if ((*x%100)%10 == 6){
								printf ("Seis ");
							}
							else
								if ((*x%100)%10 == 7){
									printf ("Sete ");
								}
								else
									if ((*x%100)%10 == 8){
										printf ("Oito ");
									}
									else{
										printf ("Nove ");
									}
	if (((*x/10)%10) == 0){
		printf ("Zero ");
	}
	else
		if (((*x/10)%10) == 1){
			printf ("Um ");
		}
		else
			if (((*x/10)%10) == 2){
				printf ("Dois ");
			}
			else
				if (((*x/10)%10) == 3){
					printf ("Tres ");
				}
				else
					if (((*x/10)%10) == 4){
						printf ("Quatro ");
					}
					else
						if (((*x/10)%10) == 5){
							printf ("Cinco ");
						}
						else
							if (((*x/10)%10) == 6){
								printf ("Seis ");
							}
							else
								if (((*x/10)%10) == 7){
									printf ("Sete ");
								}
								else
									if (((*x/10)%10) == 8){
										printf ("Oito ");
									}
									else{
										printf ("Nove ");
									}
	if ((*x/100) == 0){
		printf ("Zero.");
	}
	else
		if ((*x/100) == 1){
			printf ("Um.");
		}
		else
			if ((*x/100) == 2){
				printf ("Dois.");
			}
			else
				if ((*x/100) == 3){
					printf ("Tres.");
				}
				else
					if ((*x/100) == 4){
						printf ("Quatro.");
					}
					else
						if ((*x/100) == 5){
							printf ("Cinco.");
						}
						else
							if ((*x/100) == 6){
								printf ("Seis.");
							}
							else
								if ((*x/100) == 7){
									printf ("Sete.");
								}
								else
									if ((*x/100) == 8){
										printf ("Oito.");
									}
									else{
										printf ("Nove.");
									}																						
}
int main(){
	int x;
	scanf ("%d",&x);
	aux(&x);
}