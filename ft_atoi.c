/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lykalon <lykalon@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 21:52:06 by lykalon           #+#    #+#             */
/*   Updated: 2021/10/06 18:27:00 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isspace(char c)
{
	if ((c == ' ') || (c == '\t') || (c == '\n') || (c == '\v') || (c == '\f')
		|| (c == '\r'))
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int	result;
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	result = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while ((str[i] >= 48) && (str[i] <= 57))
	{
		result = result * 10 + str[i] - 48;
		i++;
	}
	result *= sign;
	return (result);
}
