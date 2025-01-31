#include <stdio.h>


int main() {
    int num;
    scanf("%d",&num);
    for (int i = 31; i>=0 ;i--){
        printf("%d",(num>>1)& 1);

    }
    printf("\n");
    return 0;
}