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
	printf("%d + %d = %d \n",a,b,sum);		//5 + 1 の結果 
	printf("%d  %d = %d\n",a,c,amari ); 		//5　/ 3の余り
	printf("%d * %d = %d\n",a,b,kakezan);		//5 × 1の結果
 	printf("paw(%f ,%f) = %f \n",d,e,jouzan);	//5の3乗の結果
	printf("sqrt( %f ) = %f \n ",d,ruuto);		//√5の結果
	return 0;
}
