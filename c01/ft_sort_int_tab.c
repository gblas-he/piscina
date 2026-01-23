/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 10:25:20 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/23 16:42:45 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// Ordena un array de enteros en orden ascendente
void	ft_sort_int_tab(int *tab, int size)
{
	int	small;
	int	length_i;
	int	i_small;
	int	j;
	int	change;

	i_small = 0;
	length_i = size - 1;
	while (i_small < length_i)
	{
		small = i_small;
		j = i_small;
		while (j < size)
		{
			if (tab[j] < tab[small])
				small = j;
			j++;
		}
		change = tab[i_small];
		tab[i_small] = tab[small];
		tab[small] = change;
		i_small++;
	}
}

/*int   main(void)
{
        int     tab [] = {11, 5, 6, 8, 30};
        int     counter;

        counter = 0;
        ft_sort_int_tab(tab, 5);
        while (counter < 5)
        {
                printf("%d, ", tab[counter]);
                counter++;
        }
}*/
