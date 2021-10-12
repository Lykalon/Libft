/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lykalon <lykalon@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 23:25:54 by lykalon           #+#    #+#             */
/*   Updated: 2021/10/12 23:28:01 by lykalon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*towrite;

	if (!lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	towrite = ft_lstlast(*lst);
	towrite->next = new;
}
