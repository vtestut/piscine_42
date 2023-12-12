#include <stdio.h>

unsigned int ft_strlen(char *str)
{
    unsigned int i;
    while (str[i] != '\0')
        {
            i++;
        }
return (i);
}

int ft_strncmp(char *s1, char *s2, unsigned int n)

{
    unsigned int i;

    i = 0;
    if (n == 0)
    return (0);
    while (s1[i] == s2[i] && s1[i])
    {
        if (i < (n - 1))
        ++i;
        else
        return (0);
    }
return (s1[i] - s2[i]);
}

int main(void)
{
    char s1[] = "Je suis content";
    char s2[] = "Je suis pas content";
    unsigned int n = ft_strlen(s1) + ft_strlen(s2);
    printf("%i", ft_strncmp(s1, s2, n)); 
}