#include <stdio.h>

int factorial(int n)
{
    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main(void)
{
    int n, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        result = factorial(n);
        printf("Factorial of %d is: %d\n", n, result);
    }

    return 0;
}
