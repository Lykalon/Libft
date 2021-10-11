/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lykalon <lykalon@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:20:15 by lykalon           #+#    #+#             */
/*   Updated: 2021/10/07 19:26:34 by lykalon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_in_set(char ch, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == ch)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*res;
	const char	*end;

	if (!s1 || (*s1 == '\0'))
	{
		res = ft_calloc(1, sizeof(char));
		return (res);
	}
	while (ft_check_in_set(*s1, set))
		s1++;
	end = s1;
	while (*end)
		end++;
	if (end == s1)
	{
		res = ft_calloc(1, sizeof(char));
		return (res);
	}
	while (ft_check_in_set(*(end - 1), set))
		end--;
	res = ft_substr(s1, 0, (end - s1));
	return (res);
}
