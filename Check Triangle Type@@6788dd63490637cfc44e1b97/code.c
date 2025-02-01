#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a,&b,&c);
if (a + b > c && a + c > b && b + c > a){
        printf("Equilateral\n");
 }  else if ( a == b && b== c){
     printf("Isosceles\n");
 }  else {
    printf("Scalene\n");
 } else{
    printf("Not a Triangel");
 }
  
    return 0;
}