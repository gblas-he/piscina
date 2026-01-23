/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 14:18:45 by gblas-he          #+#    #+#             */
/*   Updated: 2025/11/27 18:49:29 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*buff_src;
	int	i;
	int	len_src;

	len_src = 0;
	while (src[len_src])
	{
		len_src++;
	}
	buff_src = malloc (sizeof(char) * (len_src + 1));
	if(!buff_src)
		return (NULL);
	i = 0;
	while (i < len_src)
	{
		buff_src[i] = src[i];
		i++;
	}
	buff_src[i] = '\0';
	return (buff_src);
}

int	main(int argc, char **argv)
{
	int	i;
	char	*a;

	i = 0;
	if (argc == 2)
	{
		a = ft_strdup(argv[1]);
		while (a[i])
			i++;
		write(1, a, i);
		write(1, "\n", 1);
		free(a);
	}
	return (0);
}
