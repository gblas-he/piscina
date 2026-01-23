/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 13:22:44 by gblas-he          #+#    #+#             */
/*   Updated: 2025/11/17 09:20:17 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(97 <= str[i] && str[i] <= 122))
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	int c;

	//char alfa1 [] = "hola";
	char alfa2 [] = "";
	//char alfa3 [] = "Hola";
	c = ft_str_is_lowercase(alfa2);
	printf ("%d", c);
	return (0);
}*/
