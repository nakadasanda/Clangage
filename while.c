#include <stdio.h>
#include <time.h>

int main(void){
   int sleep;
   time_t old_time,now_time;
   old_time = time(NULL);now_time = time(NULL);
   sleep = 5;
   printf("%d秒間眠ります\n",sleep);
   while(now_time - old_time <= sleep  ) {
      now_time = time(NULL);

   }
   printf("おきました。\n");
   return 0;
   
}
