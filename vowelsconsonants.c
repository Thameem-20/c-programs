#include<stdio.h>
#include<ctype.h>

void vowcons(char str[]){
    int vowels = 0, consonants = 0;
    for(int i = 0; str[i] != '\0'; i++){
        char ch = tolower(str[i]);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            vowels++;
        }
        else{
            consonants++;
        }
        
    }
    printf("vowels: %d\n", vowels);
    printf("consonants: %d\n", consonants);
}

int main(){
    char str[100] = "thameem";
    vowcons(str);
    return 0;
}