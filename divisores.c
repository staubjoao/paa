#include <stdio.h>

int *divisores(int *i, int n)
{
    int r[n];
    r[0]=1;
    if (i == 1)
        return r;
    if ((n % i) == 0)
        return r *divisores(i - 1, n);
    else
        return divisores(i - 1, n);
}

int main()
{
    int *divisores;

    return 0;
}