/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lykalon <lykalon@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 18:38:30 by lykalon           #+#    #+#             */
/*   Updated: 2021/10/05 19:23:31 by lykalon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int ch)
{
	const char	*res;

	res = str;
	if (ch == 0)
	{
		while (res)
			res++;
		return ((char *)res);
	}
	while (res)
	{
		if (*res == ch)
			return ((char *)res);
		res++;
	}
	return (0);
}
