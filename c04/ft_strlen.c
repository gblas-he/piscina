/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 00:56:11 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/23 18:28:44 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void	ft_impress(int n)
{
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
		ft_impress(n / 10);
	n = (n % 10) + '0';
	write(1, &n, 1);
}*/

// Devuelve la longitud de una cadena (sin contar el '\0').
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

/*int	main(void)
{
	char	str[] = "hello";
	int		a;

	a = 0;
	a = ft_strlen(str);
	ft_impress(a);
	return (0);
}*/
