#include <stdio.h>


int main() {
    int a,b ;
    if (scanf("%d %d",&a ,&b)){
        printf("Invalid input\n");
        return 1 ;

    }
      printf("%d\n",a^b);
   
    return 0;
}