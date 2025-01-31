#include <stdio.h>

int main() {
    int num, p=0;
    scanf("%d",&num);
    if(num == 0){
         printf("-1\n");
         return 0 ;
    }
    while
    ((num & 1)==0){
        num>>=1;
        p++;

    }
    printf("%d\n",p);
    return 0;
}