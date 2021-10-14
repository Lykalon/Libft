/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lykalon <lykalon@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 20:10:45 by lykalon           #+#    #+#             */
/*   Updated: 2021/10/14 16:14:07 by lykalon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*tmp;
	t_list	*result;

	if ((!lst) || (!f) || (!del))
		return (lst);
	tmp = lst;
	result = 0;
	while (tmp)
	{
		tmp = lst->next;
		new = ft_lstnew(f(lst->content));
		if (!new)
			break ;
		ft_lstadd_back(&result, new);
		lst = tmp;
	}
	if (tmp)
	{
		ft_lstclear(&result, del);
		return (0);
	}
	return (result);
}
