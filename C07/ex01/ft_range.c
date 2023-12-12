/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtestut <vtestut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 19:19:46 by vtestut           #+#    #+#             */
/*   Updated: 2022/07/27 13:09:16 by vtestut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*rez;

	rez = NULL;
	i = 0;
	if (min >= max)
		return (NULL);
	rez = (int *)malloc(sizeof(int) * (max - min));
	if (!rez)
		return (NULL);
	while (min < max)
	{
		rez[i] = min;
		min++;
		i++;
	}
	return (rez);
}
