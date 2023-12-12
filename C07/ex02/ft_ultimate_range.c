/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bla.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtestut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 11:06:42 by vtestut           #+#    #+#             */
/*   Updated: 2022/07/28 11:31:28 by vtestut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*ptr;
	int	i;
	int	len;

	len = max - min;
	i = 0;
	if (min >= max)
		return (0);
	ptr = malloc(sizeof(int) * len);
	if (!ptr)
		return (-1);
	while (i < len)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	*range = ptr;
	return (len);
}
