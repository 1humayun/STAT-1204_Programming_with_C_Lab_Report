#include<stdio.h>

int main()
{
    int i,j, y=6;
    for (i = 1; i<=5; i++)
    {
        printf("%d\n", i);
        if(y<=8) continue;
        printf("%d\n",y);
    }
    return 0;
}