/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 09:38:58 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/23 18:25:04 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

// Compara hasta n caracteres de dos cadenas; devuelve 0 si son iguales, >0 o <0 según el orden.
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	int	a;
	int	b;
	char	s1[] = "";
	char	s2[] = "";

	a = ft_strncmp(s1, s2, 5);
	b = strncmp(s1, s2, 5);
	printf("%d\n", a);
	printf("%d\n", b);
	return (0);
}*/
