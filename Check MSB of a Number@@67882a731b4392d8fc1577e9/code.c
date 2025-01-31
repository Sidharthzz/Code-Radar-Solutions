#include <stdio.h>

int main() {
   int num;
   printf("Enter a number;");
   scanf("%d", &num);

   int p = 0;
   while((num & 1)==0){
     num>>=1;
     p++;

   }
   printf("%d\n",p);
    return 0;
}