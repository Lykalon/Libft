/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lykalon <lykalon@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 20:06:02 by lykalon           #+#    #+#             */
/*   Updated: 2021/10/13 20:06:53 by lykalon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;
	t_list	*to_iter;

	if (!lst)
		return ;
	tmp = lst;
	while (tmp)
	{
		to_iter = tmp;
		tmp = to_iter->next;
		f(to_iter->content);
	}
}
