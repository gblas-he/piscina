/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 23:26:29 by gigarcia          #+#    #+#             */
/*   Updated: 2025/11/23 23:26:38 by gigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	is_valid_input(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
		return (0);
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

void	rush(char *dict_file, char *number)
{
	t_dict	*dict;
	char	*content;

	if (!number || !*number)
	{
		write(1, "Error\n", 6);
		return ;
	}
	content = ft_get_dict_cont(dict_file);
	if (!content)
	{
		write(1, "Dict Error\n", 11);
		return ;
	}
	dict = parse_dict(content);
	free(content);
	if (!dict)
	{
		write(1, "Dict Error\n", 11);
		return ;
	}
	solve_rush(number, dict);
	ft_free_all(dict);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (is_valid_input(argv[1]))
			rush("numbers.dict", argv[1]);
		else
			write(1, "Error\n", 6);
	}
	else if (argc == 3)
	{
		if (is_valid_input(argv[2]))
			rush(argv[1], argv[2]);
		else
			write(1, "Error\n", 6);
	}
	else
	{
		write(1, "Error\n", 6);
	}
	return (0);
}
