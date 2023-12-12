/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 09:42:59 by lfang             #+#    #+#             */
/*   Updated: 2022/07/10 20:32:25 by rigraine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ecrire(int x, char j, char k)
{
	while (x >= 1)
	{
		write(1, &j, 1);
		x--;
		if (x == 0)
			return ;
		while (x > 1)
		{
			write(1, &k, 1);
			x--;
		}
		x--;
		write(1, &j, 1);
	}
}

void	rush(int a, int b)
{
	if (a < 1 || b < 1)
	{
		return ;
	}
	ecrire(a, 'o', '-');
	b--;
	write(1, "\n", 1);
	if (b == 0)
		return ;
	while (b > 1)
	{
		write(1, "\n", 1);
		ecrire(a, '|', ' ');
		b--;
	}
	write(1, "\n", 1);
	ecrire(a, 'o', '-');
	write(1, "\n", 1);
}