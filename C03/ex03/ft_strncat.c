#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
unsigned int i;
unsigned int q;

i = 0;
while (dest[i] != '\0')
{
    i++;
}
q = 0;
    while (src[q] != '\0' && q < nb )
    {
        dest[i] = src[q];
        i++;
        q++;
    }
    dest[i] = '\0';
return (dest);
}

int main (void)
{
    char src[500] = "pates bolognaises";
    char dest[500] = "Je voudrais manger des ";
    unsigned int nb = 5;
    printf("%s", ft_strncat(dest, src, nb));
}