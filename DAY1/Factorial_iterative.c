/* Iterative implementation of factorial */
#include <stdio.h>

int factorial(int n)
{
    int i, fact = 1;

    for (i = 1; i <= n; i++)
        fact *= i;

    return fact;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial of %d is %d\n", n, factorial(n));

    return 0;
}