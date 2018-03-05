#include <stdio.h>

int main(){
   int sum,sum_math,sum_sience,sum_english,
       avg,avg_math,avg_sience,avg_english,
       nakadasan_math,nakadasan_sience,nakadasan_english,
       yamadasan_math,yamadasan_sience,yamadasan_english,
       satousan_math,satousan_sience,satousan_english;

       nakadasan_sience = 10; nakadasan_english = 8 ; nakadasan_math = 7;
       yamadasan_sience = 7 ; yamadasan_english = 9 ; yamadasan_math = 4;
       satousan_sience  = 6 ; satousan_english  = 10; satousan_math  = 3;

       
       sum_sience  = nakadasan_sience  + yamadasan_sience  + satousan_sience  ;
       sum_english = nakadasan_english + yamadasan_english + satousan_english ;
       sum_math    = nakadasan_math    + yamadasan_math    + satousan_math    ;

       sum = sum_sience + sum_english +sum_math;

       avg_sience  = sum_sience/3 ;
       avg_english = sum_english/3;
       avg_math    = sum_math/3   ;

       avg=sum/3;

       printf("理科の平均点は%dでした。\n",avg_sience) ;
       printf("英語の平均点は%dでした。\n",avg_english);
       printf("数学の平均点は%dでした。\n",avg_math)   ;
       printf("全教科の平均点は%dでした。\n",avg)      ;
       return 0;
 }