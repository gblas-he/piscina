/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_dict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 23:29:00 by gigarcia          #+#    #+#             */
/*   Updated: 2025/11/23 23:29:01 by gigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*ft_get_dict_cont(char *file_name)
{
	int		fd;
	int		bt_rd;
	char	*buffer;

	fd = open(file_name, O_RDONLY);
	if (fd == -1)
		return (NULL);
	buffer = malloc(sizeof(char) * (BUF_SIZE + 1));
	if (!buffer)
	{
		close(fd);
		return (NULL);
	}
	bt_rd = read(fd, buffer, BUF_SIZE);
	if (bt_rd == -1)
	{
		free(buffer);
		close(fd);
		return (NULL);
	}
	buffer[bt_rd] = '\0';
	close(fd);
	return (buffer);
}
