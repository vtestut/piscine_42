#include <stdio.h>
 
int ft_iterative_factorial(int nb)
{
  int i;
  int b;

  i = 1;
  b = 1;
  if (nb < 0)
    return (0);
  while ( i <= nb )
  {
    b = b * i;
    i++;
  }
return (b);
}
 
int main()
{
  int nbr = 4;
  printf("%d! = %d\n", nbr, ft_iterative_factorial(nbr));
 
  return 0;
}