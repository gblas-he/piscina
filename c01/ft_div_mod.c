/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:10:32 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/23 18:22:57 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// Divide dos números y guarda el resultado y el resto en variables distintas
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = 10;
	b = 5;
	ft_div_mod(a, b, &c, &d);
	printf("%d %d", c, d);
	return (0);
}*/
