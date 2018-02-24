#include <stdio.h>
#include <math.h>

int main(void){
	int a,b,c,sum,amari,kakezan;
	double d,e,jouzan,ruuto;
	a = 5;	b = 1;	c = 3;
	d = 5;	e  = 3;
	sum = a + b; 
	amari = a % c;
	kakezan = a * b;
	jouzan = pow(d,e); 
	ruuto = sqrt(d); //ruuto5
	printf("%d + %d = %d \n",a,b,sum);
	printf("%d  %d = %d\n",a,c,amari );
	printf("%d * %d = %d\n",a,b,kakezan);
	printf("paw(%f ,%f) = %f \n",d,e,jouzan);
	printf("sqrt( %f ) = %f \n ",d,ruuto);
	return 0;
}
