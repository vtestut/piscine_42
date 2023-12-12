#include <stdio.h>
 
int ft_iterative_factorial(int nb)
{
    if (nb == 0)
        return 1;
    if (nb > 0)
        return(nb * ft_iterative_factorial(nb - 1));
    else
        return (0);
}
 
int main()
{
  int nbr = 4;
  printf("%d! = %d\n", nbr, ft_iterative_factorial(nbr));
  return (0);
}