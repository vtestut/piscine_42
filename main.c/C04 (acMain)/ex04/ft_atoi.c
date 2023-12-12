#include <stdio.h>

int ft_atoi(char *str)
{
    int result;
    int pom;

    result = 0;
    pom = 1;
    while(*str == 32 || (*str >= 9 && *str <= 13))
        str++;
    while ((*str == '+') || (*str == '-'))
    {
        if (*str == '-')
            pom *= -1;
        str++;
    }
    while (*str >= '0' && *str <= '9')
    {
        result = result * 10 + *str - '0';
        str++;
    }
    return (result * pom);
}

int main(int ac, char **av)
{
    int prout;
    if (ac == 2)
    {
        prout = ft_atoi(av[1]);
        printf("mine = %d\n", prout);
    }
    return (0);
}