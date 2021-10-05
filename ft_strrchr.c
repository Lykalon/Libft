/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lykalon <lykalon@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 18:58:47 by lykalon           #+#    #+#             */
/*   Updated: 2021/10/05 18:58:47 by lykalon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int ch)
{
	const char	*res;
	char		*founded;

	res = str;
	founded = 0;
	if (ch == 0)
	{
		while (res)
			res++;
		return ((char *)res);
	}
	while (res)
	{
		if (*res == ch)
			founded = (char *)res;
		res++;
	}
	return (founded);
}
