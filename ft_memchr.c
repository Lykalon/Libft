/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lykalon <lykalon@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 19:20:03 by lykalon           #+#    #+#             */
/*   Updated: 2021/10/06 16:29:29 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	unsigned char	*res;
	unsigned char	founded;

	res = (unsigned char *)s;
	if (c == 0)
	{
		while (*res)
			res++;
		return ((char *)res);
	}
	founded = (unsigned char)c;
	i = 0;
	while ((n > 0) && *res)
	{
		if (*res == founded)
			return ((void *)res);
		res++;
		n--;
	}
	return (0);
}
