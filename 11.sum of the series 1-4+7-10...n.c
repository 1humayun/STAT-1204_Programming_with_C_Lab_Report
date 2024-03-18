#include <stdio.h>

int main() {
    int n, sign = 1, sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i+=3) {     //incrementing i by 3
        sum = sum + sign*i;
        sign =sign * -1;  // Changing sign for next term
    }

    printf("Sum of the series: %d\n", sum);

    return 0;
}
