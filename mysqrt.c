#include <stdio.h>
#include <math.h>

double mysqrt(double s){

    double x = s/ 2.0 ; 
    double last_x = 0.0 ; 

    while ( x != last_x ) 
    { 
        last_x = x ;
        x = (x + s / x) / 2.0 ;
    }
    return x;
}

int main(void){
     double root5;
      root5 = mysqrt(5);
     printf("√５の値は%fです。",root5);
     return 0;
}
