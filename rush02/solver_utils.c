/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 23:28:00 by gigarcia          #+#    #+#             */
/*   Updated: 2025/11/23 23:28:02 by gigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*ft_mini_itoa(int n)
{
	char	*str;

	str = malloc(4);
	if (!str)
		return (NULL);
	if (n >= 100)
	{
		str[0] = (n / 100) + '0';
		str[1] = ((n / 10) % 10) + '0';
		str[2] = (n % 10) + '0';
		str[3] = '\0';
	}
	else if (n >= 10)
	{
		str[0] = (n / 10) + '0';
		str[1] = (n % 10) + '0';
		str[2] = '\0';
	}
	else
	{
		str[0] = n + '0';
		str[1] = '\0';
	}
	return (str);
}

int	ft_atoi_chunk(char *str, int len)
{
	int	n;
	int	i;

	n = 0;
	i = 0;
	while (i < len)
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}
	return (n);
}

void	ft_print_mag(int remaining, t_dict *dict)
{
	char	*mag;
	int		z;

	if (remaining <= 0)
		return ;
	ft_putstr(" ");
	mag = malloc(remaining + 2);
	if (!mag)
		return ;
	mag[0] = '1';
	z = 1;
	while (z <= remaining)
	{
		mag[z] = '0';
		z++;
	}
	mag[z] = '\0';
	ft_putstr(ft_search_dict(dict, mag));
	free(mag);
}
