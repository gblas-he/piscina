/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarc4 <davgarc4@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 13:25:38 by davgarc4          #+#    #+#             */
/*   Updated: 2025/11/15 14:26:30 by davgarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	start(int matrix[4][4])
{
	int     row;
	int     column;
	int     size;

	row = 0;
	column = 0;
	size = 4;
	while (row < size)
	{
		while (column < size)
		{
			matrix[row][column] = 0;
			column++;
		}
		column = 0;
		row++;
	}
}

void	print_matrix(int matrix[4][4])
{
	int     row;
	int     column;
	int     size;
	char	number;
	char	up;

	row = 0;
	column = 0;
	size = 4;
	up = '\n';
	while (row < size)
	{
		while (column < size)
		{
			number = matrix[row][column] + '0';
			ft_putchar(number);
			column++;
		}
		column = 0;
		ft_putchar('\n');
		row++;
	}
}

int	main(int argc, char **argv)
{
	int	matrix[4][4];

	start(matrix);
	print_matrix(matrix);

	return (0);
}
