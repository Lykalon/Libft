/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lykalon <lykalon@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 20:32:50 by lykalon           #+#    #+#             */
/*   Updated: 2021/10/04 22:46:57 by lykalon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	char			*d;
	const char		*s;

	i = 0;
	d = dest;
	s = src;
	if (dest == src)
		return (dest);
	else if (src > dest)
		while (i++ < n)
			d[i - 1] = s[i - 1];
	else
		while (n--)
			d[n] = s[n];
	return (dest);
}
