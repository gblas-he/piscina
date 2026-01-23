/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 18:40:03 by gblas-he          #+#    #+#             */
/*   Updated: 2026/01/19 14:56:38 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
{
        unsigned int     i;
        unsigned int     dest_len;
        unsigned int     src_len;

        dest_len = 0;
        src_len = 0;
        i = 0;
        while (dest[dest_len])
        {
                dest_len++;
        }
        while (src[src_len])
        {
                src_len++;
        }
        if (size <= dest_len)
                return (size + src_len);
        while (src[i] && i < size - dest_len - 1)
        {
                dest[dest_len + i] = src[i];
                i++;
        }
        dest[dest_len + i] = '\0';
        return (dest_len + src_len);
}

int   main(void)
{
        char dest [7] = "hola";
        char src [50];
        unsigned int size = 2;

        //printf("%c\n", ft_strlcpy(dest, src, size));
        printf("%d\n", strlcpy(dest, src, size));
        printf("%s", dest);
        return (0);
}

