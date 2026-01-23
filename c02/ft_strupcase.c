/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 18:40:11 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/23 18:24:25 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// Convierte todos los caracteres de la cadena a mayúsculas.
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 97) && (str[i] <= 122))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	//char str1 [] = "hola";
	char str2 [] = "hola12 aa";

	printf("%s", ft_strupcase(str2));
	return (0);
}*/
