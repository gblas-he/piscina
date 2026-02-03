/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 23:30:16 by gigarcia          #+#    #+#             */
/*   Updated: 2025/11/23 23:30:17 by gigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# define BUF_SIZE 65536

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct s_dict
{
	char	*nb;
	char	*val;
}			t_dict;

char	*ft_get_dict_cont(char *file_name);
t_dict	*parse_dict(char *str);
char	*ft_get_key(char *str);
char	*ft_get_value(char *str);

int		ft_strlen(char *str);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
char	*ft_search_dict(t_dict *dict, char *key);

char	*ft_mini_itoa(int n);
int		ft_atoi_chunk(char *str, int len);
void	ft_print_mag(int remaining, t_dict *dict);

void	solve_rush(char *str, t_dict *dict);
void	ft_free_dict(t_dict *dict, int k);
void	ft_free_all(t_dict *dict);
#endif
