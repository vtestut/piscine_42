#include <stdio.h>

int ft_sqrt(int nb)
{
    long i;

    i = 0;
    while (i * i < nb)
        i++;
    if (i * i == nb)
        return i;
    else
        return 0;
}


int main ()
{
    printf("%d", ft_sqrt(36));
}