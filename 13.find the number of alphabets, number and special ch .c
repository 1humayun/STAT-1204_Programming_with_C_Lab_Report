#include <stdio.h>

int main() {
    char str[100];
    int alphabets = 0, numbers = 0, specials = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
     {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            alphabets++;
        else if (str[i] >= '0' && str[i] <= '9')
            numbers++;
        else if (str[i] != ' ' && str[i] != '\n')
            specials++;
    }

    printf("Number of alphabets: %d\n", alphabets);
    printf("Number of numbers: %d\n", numbers);
    printf("Number of special characters: %d\n", specials);

    return 0;
}
