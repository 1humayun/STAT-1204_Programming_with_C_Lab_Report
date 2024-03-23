#include <stdio.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            vowels++;
        else if (str[i] != ' ' && str[i] != '\n')
            consonants++;
    }

    printf("Number of Vowels: %d\n", vowels);
    printf("Number of Consonants: %d\n", consonants);

    return 0;
}
