#include <stdio.h>

int main() { 
    char ch;
    if((ch>= '0' && ch<='9'))
     ptintf("Digit\n")
    else if ((ch>='A' && ch<= 'Z')||(ch>='a' &&
    ch<='Z')){
        if(ch == 'A' || ch == 'E' || ch == 'I'|| ch=='0' || ch == 'U'|| ch == 'a' || ch=='e' || ch == 'i'
        || ch == 'o' || ch == 'u');
        printf("Vowel\n");
       else 
       printf("Constant\n"); 
    } else{
        printf("Special Character\n");
    }
    return 0;
}