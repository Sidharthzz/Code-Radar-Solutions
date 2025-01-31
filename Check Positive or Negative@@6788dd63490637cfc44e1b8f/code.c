#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num;
    scanf("%d", &num);
    if (num>0){
        ptintf("Positive\n");

        } else if (num<0){
            printf("Negative\n");
        } else{
            printf("Zero\n");
        }
    return 0;
}