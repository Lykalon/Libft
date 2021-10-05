/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lykalon <lykalon@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 19:55:50 by lykalon           #+#    #+#             */
/*   Updated: 2021/10/05 20:00:42 by lykalon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t count)
{
	int			result;
	const char	*s1;
	const char	*s2;

	s1 = (const char *)str1;
	s2 = (const char *)str2;
	result = ft_strncmp(str1, str2, count);
	return (result);
}
