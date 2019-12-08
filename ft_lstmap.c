/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtony <dtony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 14:28:35 by dtony             #+#    #+#             */
/*   Updated: 2019/12/06 15:09:43 by dtony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *)
					, void (*del)(void *))
{
	t_list	*new;

	if (lst && f)
	{
		new = ft_lstnew(f(lst->content));
		while (lst)
		{
			ft_lstadd_back(&new, ft_lstnew(f(lst->content)));
			lst = lst->next;
		}
		return (new);
	}
	return (NULL);
}