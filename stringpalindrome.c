#include <stdio.h>
#include <string.h>

void palindrome(char str[]){
    int pali = 1;
    int len = strlen(str);
    for(int i = 0; i < len/2; i++){
        if(str[i] != str[len - i -1]){
            pali = 0;
            break;
        }
    }
    if(pali == 1){
        printf("palindrome");
    }
    else{
        printf("not a palindrome");
    }
}

int main(){
    char str[100] = "ababa";
    palindrome(str);
    return 0;
}