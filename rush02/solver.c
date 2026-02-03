/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 23:27:49 by gigarcia          #+#    #+#             */
/*   Updated: 2025/11/23 23:27:50 by gigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	ft_print_tens(int n, t_dict *dict)
{
	char	*tmp;
	int		dec;

	if (n <= 19)
	{
		tmp = ft_mini_itoa(n);
		ft_putstr(ft_search_dict(dict, tmp));
		free(tmp);
	}
	else
	{
		dec = (n / 10) * 10;
		tmp = ft_mini_itoa(dec);
		ft_putstr(ft_search_dict(dict, tmp));
		free(tmp);
		if (n % 10 != 0)
		{
			ft_putstr("-");
			tmp = ft_mini_itoa(n % 10);
			ft_putstr(ft_search_dict(dict, tmp));
			free(tmp);
		}
	}
}

void	ft_print_group(int n, t_dict *dict, int *first)
{
	if (*first == 0)
		ft_putstr(" ");
	*first = 0;
	if (n >= 100)
	{
		ft_print_tens(n / 100, dict);
		ft_putstr(" ");
		ft_putstr(ft_search_dict(dict, "100"));
		if (n % 100 != 0)
			ft_putstr(" ");
	}
	if (n % 100 != 0)
		ft_print_tens(n % 100, dict);
}

int	ft_get_offset(char *str, int len)
{
	int	i;

	i = 0;
	while (str[i] == '0' && i < len - 1)
		i++;
	return (i);
}

void	process_chunk(char *str, int *vars, t_dict *dict, int *first)
{
	int	n;
	int	chunk_len;

	chunk_len = vars[0] % 3;
	if (chunk_len == 0)
		chunk_len = 3;
	n = ft_atoi_chunk(str + vars[1], chunk_len);
	if (n > 0)
	{
		ft_print_group(n, dict, first);
		ft_print_mag(vars[0] - chunk_len, dict);
	}
	else if (*first && vars[0] == 1)
		ft_putstr(ft_search_dict(dict, "0"));
	vars[0] -= chunk_len;
	vars[1] += chunk_len;
}

void	solve_rush(char *str, t_dict *dict)
{
	int	vars[2];
	int	len;
	int	first;
	int	offset;

	len = ft_strlen(str);
	offset = ft_get_offset(str, len);
	vars[0] = len - offset;
	vars[1] = offset;
	first = 1;
	while (vars[0] > 0)
	{
		process_chunk(str, vars, dict, &first);
	}
	ft_putstr("\n");
}
