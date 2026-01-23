/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 10:25:20 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/23 16:42:46 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

// Invierte el orden de los elementos de un array de enteros
int	ft_rev_int_tab(int *tab, int size)
{
	int	right;
	int	left;
	int	temp;

	int x;

	left = 0;
	right = size -1;
	while (left < right)
	{
		temp = tab[left];
		tab[left] = tab[right];
		tab[right] = temp;
		left++;
		/*right--;*/
	}

	x = tab[right];
	return (x);
}

int	main(void)
{
	int	tab [] = {11, 5, 6, 8, 30};
	int	counter;

	counter = 0;
	ft_rev_int_tab(tab, 5);
	while (counter < 5)
	{
		printf("%d, ", counter);
		counter++;
	}
}
