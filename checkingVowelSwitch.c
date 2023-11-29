#include <stdio.h>

int main() {
    char alp;
    printf("Enter an alphabet: ");
    scanf("%c", &alp);
    
    switch(alp) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is a vowel.\n",alp);
            break;
        default:
            printf("%c is not a vowel.\n",alp);
    }
    
    return 0;
}
