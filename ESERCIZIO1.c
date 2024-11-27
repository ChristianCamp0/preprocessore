#include <stdio.h>
#define CONVERTION 1936.36
#define EURO_2_LIRE(euro) (euro)*CONVERTION
#define LIRE_2_EURO(lire) (lire)/CONVERTION
int main(){
	int s;
	float v;
	printf("|Ciao in questo programma potrai convertire la moneta da Euro a Lire e viceversa\n");
	printf("1. Da Euro a Lire\n");
	printf("2. Lire a Euro\n");
	scanf("%d",&s);
	switch(s){
		case 1:
			printf("Inserisci il valore in euro da convertire:\n");
			scanf("%f", &v);
			printf("%.2f (euro) -> %.2f (lire)\n", v, EURO_2_LIRE(v));
			break;
		case 2:
			printf("Inserisci il valore in lire da convertire:\n");
			scanf("%f", &v);
			printf("%.2f (lire) -> %.2f (euro)\n", v, LIRE_2_EURO(v));
			break;
		case 3:
			printf("Mi dispaice no");
	}
	
}
