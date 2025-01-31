#include <stdio.h>

int main() {
   int a;
   scanf("%d",&a);
   int msb = a>>(sizeof(int)*8-1)&1;
   if (msb){
    printf("Set");

   }
   else{
    printf("Not Set");
   }

}