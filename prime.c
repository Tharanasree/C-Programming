#include <stdio.h>
int main()
{
    int m, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &m);
    if (m <= 1)
    {
        isPrime = 0;
    }
    else
    {
        for (int i = 2; i * i <= m; i++)
        {
            if (m % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }
    if (isPrime)
        printf("%d is a Prime number\n", m);
    else
        printf("%d is not a Prime number\n", m);
    return 0;
}
