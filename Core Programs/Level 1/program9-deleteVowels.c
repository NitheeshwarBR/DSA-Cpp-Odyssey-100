#include <stdio.h>
#include <string.h>

void removeVowels(char *str) {
    int i, j = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
            str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';
}

int main() {
    char input[100];
    
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    removeVowels(input);

    printf("String without vowels: %s\n", input);

    return 0;
}
