/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lykalon <lykalon@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 19:05:47 by lykalon           #+#    #+#             */
/*   Updated: 2021/10/05 19:12:54 by lykalon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t count)
{
	int	i;

	i = 0;
	while ((s1[i]) && (s2[i]) && count && (s1[i] == s2[i]))
	{
		i++;
		count--;
	}
	return (s1[i] - s2[i]);
}