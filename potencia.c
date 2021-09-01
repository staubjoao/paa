#include<stdio.h>

int pow(int x, int n)
{
    if(n==0)
    {
        return 1;
    }else
    {
        return (x*pow(x,n-1));
    }
}

int main()
{
    printf("%d", pow(2,7));
    return 0;
}