/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 20:05:53 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/23 18:28:21 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

/*void	ft_imprimir(int n)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
		ft_imprimir(n / 10);
	n = (n % 10) + '0';
	write(1, &n, 1);
}*/

// Convierte una cadena de caracteres en un número entero.
int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	sign = 1;
	num = 0;
	while (str[i] != '\0' && ((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * sign);
}

/*int	main(int argc, char **argv)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	if (argc != 2)
		return (1);
	a = ft_atoi(argv[1]);
	b = atoi(argv[1]);
	ft_imprimir(a);
	write(1, "\n", 1);
	ft_imprimir(b);
	return (0);
}*/
