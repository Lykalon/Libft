/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lykalon <lykalon@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:19:48 by lykalon           #+#    #+#             */
/*   Updated: 2021/10/07 18:19:48 by lykalon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size_dst)
{
	int		i;
	int		j;
	size_t	len_d;

	i = -1;
	j = 0;
	len_d = ft_strlen(dst);
	if (len_d <= (size_dst - 1) && (size_dst > 0))
	{
		while (dst[++i])
			size_dst--;
		while ((src[j]) && size_dst > 1)
		{
			dst[i] = src[j];
			i++;
			j++;
			size_dst--;
		}
		dst[i] = '\0';
	}
	if (len_d > size_dst - 1)
		len_d = size_dst;
	return (len_d + ft_strlen(src));
}
