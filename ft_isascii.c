/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lykalon <lykalon@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:19:48 by lykalon           #+#    #+#             */
/*   Updated: 2021/10/07 18:19:48 by lykalon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int ch)
{
	if ((ch >= 0) && (ch <= 127))
		return (1);
	else
		return (0);
}
