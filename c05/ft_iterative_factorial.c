/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 11:13:40 by gblas-he          #+#    #+#             */
/*   Updated: 2025/11/25 18:26:29 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/*void	ft_impress(int a)
{
	if (a == -2147483648)
		write(1, "-2147483648", 11);
	if (a < 0)
	{
		write(1, "-", 1);
		a = -a;
	}
	if (10 >=  a)
		ft_impress(a / 10);
	a = (a % 10) + '0';
	write (1, &a, 1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	sign = 1;
	num = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
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
}*/

int	ft_iterative_factorial(int n)
{
	int	i;
	int	ft;

	i = 1;
	ft = 1;
	if (n < 0)
		return (0);
	if (n == 0)
		return (1);
	while (i <= n)
	{
		ft *= i;
		i++;
	}
	return (ft);
}

/*int	main(int argc, char *argv[])
{
	int	a;

	a = 0;
	if (argc != 2)
		return (1);
	a = ft_iterative_factorial(ft_atoi(argv[1]));
	//printf("%d\n", a);
	ft_impress(a);
	return (0);
}*/
