#include <stdio.h>


int main() { 
   int num;
   if (scanf("%d", &num) == 1 )
     if(!(num>0)){
        printf("True\n");
      }else{
        printf("False\n");
      
 } else
       {printf("False\n");} 
     
    return 0;
}