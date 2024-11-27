#include<stdio.h>
#include<math.h>
#define A(r) (M_PI)*(r)*(r)
#define CIR(r) 2*(M_PI)*(r)
int main(){
	float r;
	printf("Inserisci lunghezza raggio\n");
	scanf("%f", &r);
	printf("AREA(%.2f)= %.3f\n",r, A(r));
	printf("CIRCONFERENZA(%.2f)= %.3f\n",r, CIR(r));
}
