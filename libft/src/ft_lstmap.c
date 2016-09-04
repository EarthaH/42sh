/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/02 07:34:18 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/08/02 07:54:38 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*map;

	if (lst != NULL)
	{
		while (lst != NULL)
		{
			f(lst);
			new = ft_lstnew(lst->content, lst->content_size);
			ft_lstadd(&new, map);
			lst = lst->next;
		}
		return (map);
	}
	return (NULL);
}
