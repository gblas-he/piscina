/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 20:07:03 by gblas-he          #+#    #+#             */
/*   Updated: 2025/11/17 09:32:55 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int		i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i])
	{
		if (!((65 <= str[i] && str[i] <= 90)
				|| (97 <= str[i] && str[i] <= 122)))
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	//char str1 [] = "hola";
	char str2 [] = "hola 2";
	//char str3 [3] = {'\0', '\0', '\0'};
	//char str4 [] = "";
	printf("%d", ft_str_is_alpha(str2));
	return (0);
}*/
