/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lykalon <lykalon@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 20:09:08 by lykalon           #+#    #+#             */
/*   Updated: 2021/10/05 21:22:15 by lykalon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	len_h;
	size_t	len_n;
	int		i;
	char	*res;

	if (ft_strlen(haystack) < ft_strlen(needle))
		return (0);
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	i = 0;
	len_h = ft_strlen(haystack);
	len_n = ft_strlen(needle);
	res = 0;
	while (len_h - len_n - i)
	{
		if (ft_strncmp(&haystack[i], &needle[i], len_n) == 0)
			res = (char *)haystack + i;
		else
			i++;
	}
	return (res);
}
