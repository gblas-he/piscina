/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 20:06:00 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/23 16:40:50 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Muestra los números del 0 al 9
void	ft_print_numbers(void)
{
	int		numbers;
	char	numbers2;

	numbers = 0;
	while (numbers < 10)
	{
		numbers2 = numbers + '0';
		write (1, &numbers2, 1);
		numbers++;
	}
}

/*int	main()
{
	ft_print_numbers();
	return (0);                                                 
}*/
