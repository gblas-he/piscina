/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 09:38:58 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/23 18:24:39 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// Compara dos cadenas; devuelve 0 si son iguales, >0 o <0 según el orden lexicográfico.
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i]) && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	int	b;
	char	s1[] = "hola";
	char	s2[] = "holaa";

	b = ft_strcmp(s1, s2);
	printf("%d", b);
	return (0);
}*/
