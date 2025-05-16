#include <stdio.h>
#include <ctype.h>

void capitalizeWords(char *str) {
    int newWord = 1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i])) {
            newWord = 1; 
        } else if (newWord && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            newWord = 0; 
        }
    }
}

int main() {
    char str[1000];

    printf("Введи рядок(Англійською): ");
    fgets(str, sizeof(str), stdin);

    capitalizeWords(str);

    printf("Результат: %s", str);

    return 0;
}
