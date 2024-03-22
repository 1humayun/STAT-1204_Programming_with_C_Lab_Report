#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    printf("Enter the number of Elements: ");
    scanf("%d", &n);

    double arr[n];
    for(int i=0; i<n; i++)
        scanf("%lf", &arr[i]);
    
    double sum=0, mean, var = 0, temp=0, sd;

    for(int i=0; i<n; i++)
    {
        sum = sum + arr[i];
    }
    mean = sum/n;

    for(int i=0; i<n; i++)
    {
        var = var + pow((arr[i]-mean),2);
    }
    var = var/n;

    sd = sqrt(var);
    printf("Mean %.2f\nVariance %.2f\nStandard Deviation %.2f\n", mean, var, sd);

    return 0;
}
