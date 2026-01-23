/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:13:16 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/19 14:52:04 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*d;
	char	*s;
	int		i;

	i = 0;
	if (!dest || !src)
		return (0);
	d = dest;
	s = src;
	while (s[i])
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}

int   main(void)
{
	char origen[] = "Hola  mundo welcome to the jungle";
	char destino[50];

	ft_strcpy(destino, origen);
	printf("Destino:%s\n", destino);
	return(0);
}
