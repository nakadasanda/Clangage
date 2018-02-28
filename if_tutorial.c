#include <stdio.h>
#include <stdbool.h>

int main(){
   bool onigiri;
   onigiri = false;

   printf("霊夢は、コンビニに行きました。\n");
   printf("霊夢は、おにぎりを探しました。\n");
   if(onigiri){
      printf("霊夢は、おにぎりを買いました。\n");
   }else {
      printf("霊夢は、おにぎりがなかったので、メロンパンを買いました。\n");
   }
   return 0;
}
