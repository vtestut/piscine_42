/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 09:42:59 by lfang             #+#    #+#             */
/*   Updated: 2022/07/10 20:25:09 by rigraine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ecrire(int x, char j, char k)
{
	while (x >= 1)
	{
		ft_putchar (j);
		x--;
		if (x == 0)
			return ;
		while (x > 1)
		{
			ft_putchar(k);
			x--;
		}
		ft_putchar(j);
		x--;
	}
}

void	rush(int a, int b)
{
	if (a < 1 || b < 1)
		return ;
	ecrire(a, 'A', 'B');
	write(1, "\n", 1);
	b--;
	if (b == 0)
		return ;
	while (b > 1)
	{
		ecrire(a, 'B', ' ');
		write(1, "\n", 1);
		b--;
	}
	ecrire(a, 'C', 'B');
	write(1, "\n", 1);
}
