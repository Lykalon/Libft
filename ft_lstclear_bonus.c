/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lykalon <lykalon@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 19:44:06 by lykalon           #+#    #+#             */
/*   Updated: 2021/10/14 16:14:07 by lykalon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*to_free;

	if (!lst)
		return ;
	if (!*lst)
		return ;
	if (!del)
		del = free;
	tmp = *lst;
	while (tmp)
	{
		to_free = tmp;
		tmp = to_free->next;
		del(to_free->content);
		free(to_free);
	}
	*lst = 0;
}
