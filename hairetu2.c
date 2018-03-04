#include <stdio.h>

int main(){
   int sum[4];
       avg[4];
       test[3][3];

       test[0][0] = 10; test[0][1] = 8 ; test[0][2] = 7;
       test[1][0] = 7 ; test[1][1] = 9 ; test[1][2] = 4;
       test[2][0] = 6 ; test[2][1] = 10; test[2][2] = 3;


       
       sum[1]  = test[0][0]  + test[1][0] + test[2][0] ;
       sum[2] = test[0][1]  + test[1][1] + test[2][1] ;
       sum[3]    = test[0][2]  + test[1][2] + test[2][2] ;

       sum[0] = sum[1] + sum[2] +sum[3];

       avg[1] = sum[1]/3 ;
       avg[2] = sum[2] /3;
       avg[3] = sum[3] /3   ;

       avg[0] = sum/3;

       printf("理科の平均点は%dでした。\n",avg[1]  );
       printf("英語の平均点は%dでした。\n",avg[2]  );
       printf("数学の平均点は%dでした。\n",avg[3]  );
       printf("全教科の平均点は%dでした。\n",avg[0]);
       return 0;
 }