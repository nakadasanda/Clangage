#include <stdio.h>


int main(void){
   int kinoko;
   kinoko = 0;
loop:
   if(kinoko < 10  ){
      kinoko++;
      printf("�L�m�R��%d�W�߂܂���\n",kinoko);
      goto loop;
   }else {
      printf("\n");
      printf("�L�m�R��%d�W�߂��̂�loop�͏I���ł��B\n",kinoko);
   }
   return 0;
}