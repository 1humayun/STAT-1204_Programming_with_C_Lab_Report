//C Program to reverse a number entered by user...

#include<stdio.h>

int main()
{
    int n, reverse = 0, sum = 0;
    printf("Enter the Number: ");
    scanf("%d",&n);

    while (n!=0)
    {
        int rem = n%10;
        sum = sum + rem;
        reverse = reverse*10 + rem;
        n = n/10;
    }
    printf("Reverse of the number you have entered is: %d\n",reverse);
    printf("Sum of Digits: %d", sum);

    return 0;
}
