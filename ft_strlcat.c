/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lykalon <lykalon@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 17:25:33 by lykalon           #+#    #+#             */
/*   Updated: 2021/10/05 21:36:14 by lykalon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size_dst)
{
	int		i;
	int		j;
	size_t	len_d;

	i = 0;
	j = 0;
	len_d = ft_strlen(dst);
	if (len_d < (size_dst - 1) && (size_dst > 0))
	{
		while (dst[i])
		{
			size_dst--;
			i++;
		}
		while ((src[j]) && size_dst > 1)
		{
			dst[i] = src[j];
			i++;
			j++;
			size_dst--;
		}
		dst[i] = '\0';
	}
	return (len_d + ft_strlen(src));
}
