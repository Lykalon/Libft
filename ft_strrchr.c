/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lykalon <lykalon@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:19:48 by lykalon           #+#    #+#             */
/*   Updated: 2021/10/07 18:19:48 by lykalon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int ch)
{
	char	*res;
	char	*founded;
	char	c;

	res = (char *)str;
	founded = 0;
	c = (char)ch;
	if (c == 0)
	{
		while (*res)
			res++;
		return (res);
	}
	while (*res)
	{
		if (*res == c)
			founded = (char *)res;
		res++;
	}
	return (founded);
}
