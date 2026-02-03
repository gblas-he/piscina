/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 14:40:26 by jezambra          #+#    #+#             */
/*   Updated: 2025/11/09 22:56:06 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	vision(int x, int y, int i, int j)
{
	if (((i == 0) && (j == 0)) || ((i == x -1) && (j == y -1)))
	{
		ft_putchar('/');
	}
	else if (((i == x -1) && (j == 0)) || ((i == 0) && (j == y -1)))
	{
		ft_putchar('\\');
	}
	else if ((i == 0) || (i == x - 1))
	{
		ft_putchar('*');
	}
	else if ((j == 0) || (j == y - 1))
	{
		ft_putchar('*');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < y)
	{
		while (i < x)
		{
			vision(x, y, i, j);
			i++;
		}
		ft_putchar(10);
		j++;
		i = 0;
	}
}
