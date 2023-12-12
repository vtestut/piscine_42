#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
    int i;
    int x;

    i = 1;
    x = nb;
    while (i < power)
    {
        x = nb * x;
        i++;
    }
    return (x);
}

int main ()
{
    printf("%d", ft_iterative_power(4, 4));
}

// 1024