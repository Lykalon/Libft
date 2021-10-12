/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lykalon <lykalon@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 20:47:08 by lykalon           #+#    #+#             */
/*   Updated: 2021/10/12 20:55:47 by lykalon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_rev_tab(char *tab, size_t size)
{
	size_t		count;
	char		temp;

	count = 0;
	while (count < (size / 2))
	{
		temp = *(tab + count);
		*(tab + count) = *(tab + size - count - 1);
		*(tab + size - count - 1) = temp;
		count++;
	}
}

static void	ft_check_negative(char *buffer, int *n, int *i, int *sign)
{
	if (*n == -2147483648)
	{
		buffer[*i] = '8';
		*n = *n / 10;
		*i = *i + 1;
	}
	if (*n < 0)
	{
		*sign = (-1);
		*n = *n * (-1);
	}
}

static void	ft_set_array(char buffer[12], int n)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	ft_check_negative(buffer, &n, &i, &sign);
	while (n > 9)
	{
		buffer[i] = (char)((n % 10) + 48);
		n = n / 10;
		i++;
	}
	buffer[i] = (char)(n + 48);
	i++;
	if (sign < 0)
		buffer[i] = '-';
}

static void	*ft_itoa_2(int n, char *buffer)
{
	ft_bzero(buffer, 12);
	ft_set_array(buffer, n);
	ft_rev_tab(buffer, ft_strlen(buffer));
	return (buffer);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	res[12];

	ft_itoa_2(n, res);
	write(fd, res, ft_strlen(res));
}
