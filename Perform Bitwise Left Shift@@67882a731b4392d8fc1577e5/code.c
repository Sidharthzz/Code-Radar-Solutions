#include <stdio.h>

int main() { 
    int num, shift;
    if (scanf("%d %d",&num,&shift)!=2){
        printf("Invalid\n");
        return 1;

    }
    printf("%d\n", num<<shift);
    return 0;
}