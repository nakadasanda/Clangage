#include <stdio.h>

/*
 *  find the averege value
 *
 * name[subject]
 *  
 *  subject = 0 science
 *  subject = 1 english
 *  subject = 2 math
 *  
 *  
 */

int main(){
   int sum[4],avg[4],nakada[3],
       yamada[3],satou[3];

       //初期化中
       nakada[0] = 10; nakada[1] = 8 ; nakada[2] = 7;
       yamada[0] = 7 ; yamada[1] = 9 ; yamada[2] = 4;
       satou[0]  = 6 ; satou[1]  = 10; satou[2]  = 3;


       //sum
       sum[1] = nakada[0]  + yamada[0] + satou[0] ;
       sum[2] = nakada[1]  + yamada[1] + satou[1] ;
       sum[3] = nakada[2]  + yamada[2] + satou[2] ;

       sum[0] = sum[1] + sum[2] +sum[3];

       //avg
       avg[1] = sum[1]/3 ;
       avg[2] = sum[2] /3;
       avg[3] = sum[3] /3   ;

       avg[0] = sum[0]/3;

       printf("理科の平均点は%dでした。\n",avg[1]  );
       printf("英語の平均点は%dでした。\n",avg[2]  );
       printf("数学の平均点は%dでした。\n",avg[3]  );
       printf("全教科の平均点は%dでした。\n",avg[0]);
       return 0;
 }