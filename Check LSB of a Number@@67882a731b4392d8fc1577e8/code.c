#include <stdio.h>

int main() {
    int num ;
    if (scanf("%d",&num)!= 1){
        printf("Invalid input\n");
        return 1;
    }
    if (num & 1)
      printf("Set\n");
    else 
    printf("Not Set\n");
    
    return 0;
}