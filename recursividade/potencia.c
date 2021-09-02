#include <stdio.h>

int power(int x, int n)
{
    if (n == 0)
        return 1;
    else if ((n % 2) == 0)
    {
        int aux;
        aux = power(x, n / 2);
        return aux * aux;
    }
    else
        return power(x, n - 1) * x;
}

int main()
{
    printf("%d", power(2, 28));
    return 0;
}