/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 09:42:59 by lfang             #+#    #+#             */
/*   Updated: 2022/07/10 20:35:01 by rigraine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ecrire(int x, char j, char k, char l)
{
	while (x >= 1)
	{
		write(1, &j, 1);
		x--;
		if (x == 0)
		{
			return ;
			write(1, "\n", 1);
		}
		while (x > 1)
		{
			write(1, &k, 1);
			x--;
		}
		x--;
		write(1, &l, 1);
	}
}

void	rush(int a, int b)
{
	if (a < 1 || b < 1)
		return ;
	ecrire(a, 'A', 'B', 'C');
	write(1, "\n", 1);
	b--;
	if (b == 0)
		return ;
	while (b > 1)
	{
		write(1, "\n", 1);
		ecrire(a, 'B', ' ', 'B');
		b--;
	}
	write(1, "\n", 1);
	ecrire(a, 'C', 'B', 'A');
	write(1, "\n", 1);
}
