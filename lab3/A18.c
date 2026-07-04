//18. Write a program to calculate average of first n numbers
#include <stdio.h>

int main()
{
    int n, i;
    float sum = 0, avg;

    printf("Enter value of n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    avg = sum / n;

    printf("Average = %.2f", avg);

    return 0;
}