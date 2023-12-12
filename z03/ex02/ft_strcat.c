#include <stdio.h>

unsigned int ft_strlen(char *src)
{
    unsigned int c;

    c = 0;
    while(src[c] != '\0')
    {
        c++;
    }
return (c);
}

char *ft_strcat(char *dest, char *src)
{
    unsigned int i;
    unsigned int taille;

    i = 0;
    taille = ft_strlen(dest);
    while (src[i] != '\0')
    {
        dest[taille + i] = src[i];
        i++;
    }
    dest[taille + i] = '\0';
    return (dest);
}

int main (void)
{
    char src[50] = "Pon";
    char dest[50] = "Pata ";
    printf("%s", ft_strcat(dest, src));
}