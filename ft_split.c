/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lykalon <lykalon@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 17:50:42 by lykalon           #+#    #+#             */
/*   Updated: 2021/10/12 19:36:16 by lykalon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_lnchr(const char *str, char c)
{
	size_t	i;

	i = 0;
	while ((str[i]) && (str[i] != c))
		i++;
	return (i);
}

static size_t	ft_count_words(const char *str, char c)
{
	size_t	i;
	size_t	count;
	int		flag;

	i = 0;
	count = 0;
	if (*str != '\0')
	{
		flag = 1;
		count++;
	}
	while (str[i])
	{
		if ((str[i] == c) && (flag == 1))
			flag = 0;
		else if ((str[i] != c) && (flag == 0))
		{
			flag = 1;
			count++;
		}
		i++;
	}
	return (count);
}

static void	ft_free(char **s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	s = 0;
	free(s);
}

static void	ft_set_array(const char *s, char c, size_t words, char **result)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		result[i] = ft_substr(s, 0, ft_lnchr(s, c));
		if (!result[i])
			break ;
		i++;
		s = s + ft_lnchr(s, c);
		while ((*s == c) && (*s))
			s++;
	}
	if (i <= words - 2)
		ft_free(result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	words;

	if (s == 0)
		return (0);
	if (*s == '\0')
	{
		result = ft_calloc(1, sizeof(char **));
		return (result);
	}
	while (*s == c)
		s++;
	if (*s == '\0')
	{
		result = ft_calloc(1, sizeof(char **));
		return (result);
	}
	words = ft_count_words(s, c) + 1;
	result = (char **)ft_calloc(words, sizeof(char *));
	if (result)
		ft_set_array(s, c, words, result);
	else
		result = ft_calloc(1, sizeof(char **));
	return (result);
}
