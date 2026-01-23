/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 11:04:36 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/23 18:23:21 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

// Devuelve 1 si la cadena solo contiene números (0-9), 0 si no.
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i])
	{
		if (!(48 <= str[i] && 57 >= str[i]))
			return (0);
		i++;
	}
	return (1);
}

/*char	ascii(int c)
{
	if (c >= 0 && c <=  9)
		return (c +'0');
	return ('\0');
}

int	main(void)
{
	int c;
	char ch;

	char num1 [] = "1 2 3 4 5";
	//char num2 [] = "";
	//char num3 [] = "a";
	c = ft_str_is_numeric(num1);
	//printf("%d", c);
	ch = ascii(c);
	write(1, &ch, 1);;
	return (0);
}*/
