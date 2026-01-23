/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 18:40:11 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/23 18:23:47 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// Convierte la primera letra de cada palabra en mayúscula y las demás en minúscula.
char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if ((str[0] >= 97) && (str[0] <= 122))
		str[0] = str[0] - 32;
	while (str[i] != '\0')
	{
		if ((str[i] == 32) && (str[i + 1] >= 97) && (str[i + 1] <= 122))
			str[i + 1] = str[i + 1] - 32;
		if ((str[i] == 45) && (str[i + 1] >= 97) && (str[i + 1] <= 122))
			str[i + 1] = str[i + 1] - 32;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char str1 [] = "hola mundo wel-come to the jungle";
	//char str2 [] = "hola12aa";

	printf("%s", ft_strcapitalize(str1));
	return (0);
}*/
