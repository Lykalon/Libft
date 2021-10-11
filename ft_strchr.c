/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lykalon <lykalon@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:19:48 by lykalon           #+#    #+#             */
/*   Updated: 2021/10/11 18:21:26 by lykalon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int ch)
{
	const char	*res;
	char		c;

	res = str;
	c = (char) ch;
	if (c == 0)
	{
		while (*res)
			res++;
		return ((char *)res);
	}
	while (*res)
	{
		if (*res == c)
			return ((char *)res);
		res++;
	}
	return (0);
}
