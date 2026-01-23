/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 19:56:41 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/23 18:24:52 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// Concatena hasta n caracteres de la fuente al final de destino.
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				j;

	i = 0;
	j = 0;
	while (dest[j])
		j++;
	while ((i < nb) && (src[i]))
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (dest);
}

/*int   main(void)
{
	unsigned int nb;
        char    s1[20] = "hoqa";
        char    s2[] = "holaa";

	nb = 2;
        ft_strncat(s1, s2, nb);
        printf("%s", s1);
        return (0);
}*/
