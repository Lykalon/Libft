/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lykalon <lykalon@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 23:00:20 by lykalon           #+#    #+#             */
/*   Updated: 2021/10/12 23:19:45 by lykalon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*count;
	int		i;

	i = 0;
	if (!lst)
		return (i);
	i++;
	count = lst;
	while (count->next)
	{
		count = count->next;
		i++;
	}
	return (i);
}
