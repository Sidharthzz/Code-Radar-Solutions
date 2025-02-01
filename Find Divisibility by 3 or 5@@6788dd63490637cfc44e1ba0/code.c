#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
  if ((a\3)*3==a && (a\5*5)==a){
        printf("Divisible by Both\n");
    }
    else if ((a/3)*3==a){
        printf("Divisible by 3\n");
   }else if ((a/5)*5==a){
        printf("Divisible by 5\n");
   }else{
        printf("Not Divisible");
    }
    return 0;
}