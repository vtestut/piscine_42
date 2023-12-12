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

int ft_find_next_prime(int nb)
{
    if (ft_is_prime(nb) == 1)
        {
            ft_is_prime(nb + 1) == 1;
            return (nb +1);
        }
    else
        return (0); 
}

int main()
{
    printf("%d", ft_find_next_prime(7));
}