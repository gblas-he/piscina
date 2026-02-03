/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 14:40:26 by jezambra          #+#    #+#             */
/*   Updated: 2025/11/09 23:02:21 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	vision(int x, int y, int i, int j)
{
	if (((i == 0) && (j == 0)) || ((i == x -1) && (j == y -1)))
	{
		ft_putchar('A');
	}
	else if (((i == x -1) && (j == 0)) || ((i == 0) && (j == y -1)))
	{
		ft_putchar('C');
	}
	else if ((i == 0) || (i == x - 1))
	{
		ft_putchar('B');
	}
	else if ((j == 0) || (j == y - 1))
	{
		ft_putchar('B');
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
