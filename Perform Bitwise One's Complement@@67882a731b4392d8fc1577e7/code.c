#include <stdio.h>


int main() {
    int num;
    if (scanf("%d", num)!= 1){
        printf("Invalid input\n");
        return 1 ;
    
    }
     printf("%d\n", ~num);
    return 0;
}