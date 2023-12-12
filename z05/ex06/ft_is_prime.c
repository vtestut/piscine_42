#include <stdio.h>

int ft_is_prime(int nb)
{
    int p;
    int i;

    p = 0;
    i = 1;

    while (i <= nb)
    {
        if (nb % i == 0)
            p++;
    i++;
    }
    if (p == 2)
        return (1);
    else
        return (0);
}

int main()
{
    printf("%d", ft_is_prime(17));
}
