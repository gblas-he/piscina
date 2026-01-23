/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 13:22:44 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/23 18:23:38 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// Devuelve 1 si la cadena solo contiene letras mayúsculas, 0 si no.
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(65 <= str[i] && str[i] <= 90))
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	int c;

	char alfa1 [] = "hola";
	//char alfa2 [] = "";
	//char alfa3 [] = "HOLA";
	c = ft_str_is_uppercase(alfa1);
	printf ("%d", c);
	return (0);
}*/
