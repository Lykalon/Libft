/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lykalon <lykalon@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 16:29:33 by lykalon           #+#    #+#             */
/*   Updated: 2021/10/04 19:09:33 by lykalon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buffer, int c, size_t len)
{
	size_t			i;
	unsigned char	*new;

	i = 0;
	new = buffer;
	while (i < len)
	{
		new[i] = c;
		i++;
	}
	return (buffer);
}
