/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:12:04 by mialbert          #+#    #+#             */
/*   Updated: 2021/12/02 23:50:30 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap_bonus(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list			*tmp;
	struct s_list	*lst2;

	lst2 = malloc(sizeof(t_list));
	if (!lst2)
		return (NULL);
	tmp = lst;
	while (tmp != 0)
	{
		if (!(f(tmp->content)))
			ft_lstdelone_bonus(tmp->content, del);
		lst2->content = f(tmp->content);
		lst2 = lst2->next;
		tmp = tmp->next;
	}
	return (lst2);
}
