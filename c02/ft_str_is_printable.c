/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 13:22:44 by gblas-he          #+#    #+#             */
/*   Updated: 2025/11/17 17:08:55 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (!str[i])
		return (1);
	while (str[i] != '\0')
	{
		if (!(32 <= str[i] && str[i] <= 127))
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	int c;

	char alfa1 [] = "hola";
	//char alfa2 [] = "0";
	//char alfa3 [] = "HOLA";
	c = ft_str_is_printable(alfa1);
	printf ("%d", c);
	return (0);
}*/
