/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lykalon <lykalon@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 17:04:05 by lykalon           #+#    #+#             */
/*   Updated: 2021/10/05 17:24:51 by lykalon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size_dst)
{
	int	i;

	i = 0;
	while ((size_dst > 1) && (src[i]))
	{
		dst[i] = src[i];
		i++;
		size_dst--;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
