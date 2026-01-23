/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 10:25:20 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/23 18:23:03 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

// Calcula y devuelve la longitud de una cadena de caracteres
int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

/*int	main(void)
{
	int c;
	char str [] = {'H', 'o', 'l', 'a'};
	

	c = ft_strlen(str);
	printf("%d", c);
	return (0);
}*/
