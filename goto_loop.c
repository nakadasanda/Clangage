#include <stdio.h>


int main(void){
   int kinoko;
   kinoko = 0;
loop:
   if(kinoko < 10  ){
      kinoko++;
      printf("キノコを%d個集めました\n",kinoko);
      goto loop;
   }else {
      printf("\n");
      printf("キノコを%d個集めたのでloopは終わりです。\n",kinoko);
   }
   return 0;
}