/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 23:26:51 by gigarcia          #+#    #+#             */
/*   Updated: 2025/11/23 23:26:54 by gigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*ft_get_key(char *str)
{
	int		i;
	int		j;
	char	*key;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '+')
		i++;
	j = 0;
	while (str[i + j] >= '0' && str[i + j] <= '9')
		j++;
	if (j == 0)
		return (NULL);
	key = malloc(sizeof(char) * (j + 1));
	if (!key)
		return (NULL);
	j = 0;
	while (str[i] >= '0' && str[i] <= '9')
		key[j++] = str[i++];
	key[j] = '\0';
	return (key);
}

char	*ft_get_value(char *str)
{
	int		i;
	int		j;
	char	*val;

	i = 0;
	while (str[i] && str[i] != ':')
		i++;
	if (!str[i])
		return (NULL);
	i++;
	while (str[i] == ' ')
		i++;
	j = 0;
	while (str[i + j] && str[i + j] != '\n')
		j++;
	val = malloc(sizeof(char) * (j + 1));
	if (!val)
		return (NULL);
	j = 0;
	while (str[i] && str[i] != '\n')
		val[j++] = str[i++];
	val[j] = '\0';
	return (val);
}

int	ft_count_lines(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (*str)
	{
		if (*str == ':')
			i = 1;
		if (*str == '\n' && i == 1)
		{
			j++;
			i = 0;
		}
		str++;
	}
	return (j);
}

int	fill_node(t_dict *node, char *str)
{
	node->nb = ft_get_key(str);
	node->val = ft_get_value(str);
	if (!node->nb || !node->val)
	{
		if (node->nb)
			free(node->nb);
		if (node->val)
			free(node->val);
		return (0);
	}
	return (1);
}

t_dict	*parse_dict(char *str)
{
	t_dict	*dict;
	int		k;

	dict = malloc(sizeof(t_dict) * (ft_count_lines(str) + 1));
	if (!dict)
		return (NULL);
	k = 0;
	while (*str)
	{
		if (*str == '\n')
			str++;
		else
		{
			if (!fill_node(&dict[k], str))
			{
				ft_free_dict(dict, k);
				return (NULL);
			}
			while (*str && *str != '\n')
				str++;
			k++;
		}
	}
	dict[k].nb = NULL;
	return (dict);
}
