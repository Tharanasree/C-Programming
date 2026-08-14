#include <stdio.h>
int main()
{
    int n;
    long long factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Invalid\n");
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            factorial *= i;
        }
        printf("Factorial of the given number is %lld\n", factorial);
    }
    return 0;
}
