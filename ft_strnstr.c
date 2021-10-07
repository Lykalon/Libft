/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lykalon <lykalon@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:19:48 by lykalon           #+#    #+#             */
/*   Updated: 2021/10/07 18:19:48 by lykalon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	len_n;
	int		i;
	char	*res;

	if (ft_strlen(haystack) < ft_strlen(needle))
		return (0);
	if ((ft_strlen(needle) == 0) || (haystack == needle))
		return ((char *)haystack);
	i = 0;
	len_n = ft_strlen(needle);
	res = 0;
	while (len - len_n - i)
	{
		if (ft_strncmp(&haystack[i], needle, len_n) == 0)
		{
			res = (char *)(haystack + i);
			break ;
		}
		else
			i++;
	}
	return (res);
}
