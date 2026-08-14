#include <stdio.h>
int main()
{
    int m, rev = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &m);
    while (m != 0)
    {
        rem = m % 10;
        rev = rev * 10 + rem;
        m /= 10;
    }
    printf("The Reversed Number is %d\n", rev);
    return 0;
}
