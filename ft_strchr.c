/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lykalon <lykalon@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 18:38:30 by lykalon           #+#    #+#             */
/*   Updated: 2021/10/05 18:48:54 by lykalon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int ch)
{
	const char	*res;
	int			i;

	res = str;
	while (res)
	{
		if (*res == ch)
			return ((char *)res);
		res++;
	}
	return (0);
}
