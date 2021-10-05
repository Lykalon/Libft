/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lykalon <lykalon@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 19:20:03 by lykalon           #+#    #+#             */
/*   Updated: 2021/10/05 19:41:00 by lykalon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	char			*res;
	unsigned char	founded;

	founded = (unsigned char)c;
	i = 0;
	res = (char *)s;
	while ((n > 0) && *res)
	{
		if (*res == founded)
			return ((void *)res);
		res++;
		n--;
	}
	return (0);
}
