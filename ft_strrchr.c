/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lykalon <lykalon@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 18:58:47 by lykalon           #+#    #+#             */
/*   Updated: 2021/10/06 17:35:10 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int ch)
{
	char	*res;
	char	*founded;

	res = (char *)str;
	founded = 0;
	if (ch == 0)
	{
		while (*res)
			res++;
		return (res);
	}
	while (*res)
	{
		if (*res == ch)
			founded = (char *)res;
		res++;
	}
	return (founded);
}
