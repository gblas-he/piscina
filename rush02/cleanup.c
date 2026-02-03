/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cleanup.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 23:26:12 by gigarcia          #+#    #+#             */
/*   Updated: 2025/11/23 23:26:16 by gigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	ft_free_dict(t_dict *dict, int k)
{
	int	i;

	i = 0;
	while (i < k)
	{
		if (dict[i].nb)
			free(dict[i].nb);
		if (dict[i].val)
			free(dict[i].val);
		i++;
	}
	free(dict);
}

void	ft_free_all(t_dict *dict)
{
	int	i;

	if (!dict)
		return ;
	i = 0;
	while (dict[i].nb != NULL)
	{
		free(dict[i].nb);
		if (dict[i].val)
			free(dict[i].val);
		i++;
	}
	free(dict);
}
