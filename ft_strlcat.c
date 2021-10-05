/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lykalon <lykalon@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 17:25:33 by lykalon           #+#    #+#             */
/*   Updated: 2021/10/05 17:36:16 by lykalon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size_dst)
{
	int		i;
	int		j;
	size_t	len_d;
	size_t	len_s;

	i = 0;
	j = 0;
	len_d = ft_strlen(dst);
	len_s = ft_strlen(src);
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
	}
	return (len_d + len_s);
}
