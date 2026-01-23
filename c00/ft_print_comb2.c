/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 19:55:04 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/23 18:22:53 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Muestra todas las combinaciones de dos números de dos dígitos distintos
void	imprimir(int a, int b)
{
	int c;

	c = (a / 10) + '0';
	write(1, &c, 1);
	c = (a % 10) + '0';
	write(1, &c, 1);
	write(1, " ", 1);
	c = (b / 10) + '0';
        write(1, &c, 1);
        c = (b % 10) + '0';
        write(1, &c, 1);

}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a <= 98)
	{
		b = 1; 
		while(b <= 99)
		{
			imprimir(a, b);
			if(!(a == 98 && b == 99))
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
