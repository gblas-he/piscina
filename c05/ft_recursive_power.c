/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 19:12:12 by gblas-he          #+#    #+#             */
/*   Updated: 2025/11/25 18:55:08 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void  ft_impress(int a)
{
        if (a == -2147483648)
                write(1, "-2147483648", 11);
        if (a < 0)
        {
                write(1, "-", 1);
                a = -a;
        }
        if (a >= 10)
                ft_impress(a / 10);
        a = (a % 10) + '0';
        write(1, &a, 1);
}

int   ft_atoi(char *a)
{
        int     i;
        int     sign;
        int     num;

        i = 0;
        sign = 1;
        num = 0;
        while ((a[i] >= 9 && a[i] <= 13) || a[1] == 32)
                i++;
        while (a[i] == '+' || a[i] == '-')
        {
                if (a[i] == '-')
                        sign *= -1;
                i++;
        }
        while (a[i] >= 48 && a[i] <= 57)
        {
                num = num * 10 + (a[i] - '0');
                i++;
        }
        return (num * sign);
}*/

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * (ft_recursive_power(nb, (power - 1))));
}

/*int	main(int argc, char *argv[])
{
	int     a;
        int     b;
	int	c;

        a = 0;
        b = 0;
	c = 0;
        if (argc != 3)
                return (1);
        a = ft_atoi(argv[1]);
	b = ft_atoi(argv[2]);
        c = ft_recursive_power(a, b);
        ft_impress(c);
        return (0);

}*/
