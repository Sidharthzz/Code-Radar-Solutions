#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    if (num == 0){
        printf("32\n");
        return 0 ;

    }
    int count = 0;
    while ((num & (1<<31))==0){
        count++;
        num<<= 1;
            }
            printf("%d\n",count)
    return 0;
}