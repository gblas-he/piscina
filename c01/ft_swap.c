/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 17:34:59 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/23 16:42:42 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// Intercambia los valores de dos enteros usando punteros
void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

int	main(void)
{
	int	j;
	int	i;

	j = 42;
	i = 0;
	printf("%d %d\n", j, i);
	ft_swap(&i, &j);
	printf("%d %d", j, i);
	return (0);
}
