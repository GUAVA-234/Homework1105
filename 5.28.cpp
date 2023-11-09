#include <stdio.h>
int   changeCase(char letter) {
    if (letter >= 'A' && letter <= 'Z') {
        return letter + 32; 
    } else if (letter >= 'a' && letter <= 'z') {
        return letter - 32; 
    } else {
        return letter;
    }
}
int main() {
    char inputChar  ;
    scanf("%s",&inputChar);
    char resultChar = changeCase(inputChar);
    printf("原本: %c\n", inputChar);
    printf("大小寫轉換: %c\n", resultChar);
    return 0;
}

