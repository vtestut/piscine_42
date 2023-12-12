/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtestut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 22:33:24 by vtestut           #+#    #+#             */
/*   Updated: 2022/07/16 21:17:58 by vtestut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (to_find[len] != '\0')
		len++;
	while (str[i])
	{
		if (!(ft_strncmp(&str[i], to_find, len)))
			return (&str[i]);
	i++;
	}
	return ('\0');
}

int	main()
{
	char str[] = "musique de merde en cluster bordel de merde";
	char find[] = "cluster";
	printf("%s", ft_strstr(str, find));
}
