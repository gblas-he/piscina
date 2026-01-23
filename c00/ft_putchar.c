/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 16:33:22 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/23 18:22:56 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Escribe un carácter por la salida estándar
void	ft_putchar(char c)
{
	write (1, &c, 1);
}

/*int	main ()
{
	ft_putchar('W');
	return (0);
}*/
