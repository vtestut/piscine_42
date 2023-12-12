#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void calcul(int nb)
{
    if (nb >= 10)
    {
        calcul(nb / 10);
    }
    ft_putchar((nb % 10) + '0');
}

void ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        write(1, "-2147483648", 11);
    }
    else if (nb < 0)
    {
        ft_putchar('-');
        calcul(nb * -1);
    }
    else
    calcul(nb);
}