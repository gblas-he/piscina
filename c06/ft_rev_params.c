/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 12:59:15 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/23 18:31:40 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Imprime los argumentos del programa en orden inverso.
int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	j = argc - 1;
	while (0 < j)
	{
		i = 0;
		while (argv[j][i])
		{
			write(1, &argv[j][i], 1);
			i++;
		}
		write (1, "\n", 1);
		j--;
	}
	return (0);
}
