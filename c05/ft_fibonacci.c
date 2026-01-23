/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 19:12:12 by gblas-he          #+#    #+#             */
/*   Updated: 2025/11/25 19:05:27 by gblas-he         ###   ########.fr       */
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

int	ft_fibonacci(int index)
{
	int	n;

	n = index;
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (ft_fibonacci(n -1) + ft_fibonacci (n - 2));
}

/*int	main(int argc, char *argv[])
{
	int     a;

        a = 0;
        if (argc != 2)
                return (1);
        a = ft_atoi(argv[1]);
        a = ft_fibonacci(a);
        ft_impress(a);
        return (0);

}*/
