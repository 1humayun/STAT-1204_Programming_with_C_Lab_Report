
#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    for( int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    
    int biggest = arr[0], smallest = arr[0];

    for( int i=0; i<n; i++)
    {
        if (arr[i]>biggest)
            biggest = arr[i];
    }

    for( int i=0; i<n; i++)
    {
        if (arr[i]<smallest)
            smallest = arr[i];
    }
    printf("Biggest Number is %d. \nSmallest Number is %d.", biggest, smallest);

    return 0;
}
