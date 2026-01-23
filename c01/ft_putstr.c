/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:42:58 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/23 18:22:59 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Escribe una cadena de caracteres por la salida estándar
void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

/*int	main(void)
{
	char str [] = {'H', 'o', 'l', 'a', '\0'};
	

	ft_putstr(str);
	return (0);
}*/
