/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtestut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 10:40:28 by vtestut           #+#    #+#             */
/*   Updated: 2022/07/13 21:03:23 by vtestut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
		str[i] = str[i] + 32;
		}
	i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_start;

	i = 0;
	is_start = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (is_start == 1)
			{
				str[i] = str[i] - 32;
			}
			is_start = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			is_start = 0;
		else
		{
			is_start = 1;
		}
			i++;
	}
	return (str);
}
