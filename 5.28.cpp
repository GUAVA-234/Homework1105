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
    printf("�쥻: %c\n", inputChar);
    printf("�j�p�g�ഫ: %c\n", resultChar);
    return 0;
}

