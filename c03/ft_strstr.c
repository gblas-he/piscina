/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 12:30:45 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/23 18:25:12 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>

// Busca la primera aparición de la subcadena needle dentro de haystack y devuelve su posición.
char	*ft_strstr(char *str, char *to_find)
{
	int	j;
	int	i;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while ((to_find[j] != '\0') && (to_find[j] == str[i + j]))
		{
			j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (NULL);
}
/*int	main(void)
{
	char str[] = "hola que tal";
	char to_find [] = "";
	printf("%s\n", ft_strstr(str, to_find));
	printf("%s", strstr(str, to_find));
	return (0);
}*/
