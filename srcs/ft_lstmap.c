/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:12:04 by mialbert          #+#    #+#             */
/*   Updated: 2021/11/17 19:58:53 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list			*tmp;
	t_list			*tmp2;
	struct s_list	*t_list2;

	t_list2 = malloc(sizeof(t_list));
	if (!t_list2)
		return (NULL);
	tmp = lst;
	tmp2 = t_list2;
	while (tmp != 0)
	{
		if (!(f(tmp->content)))
			ft_lstdelone(tmp->content, del);
		tmp2->content = f(tmp->content);
		tmp2 = t_list2->next;
		tmp = lst->next;
	}
	return (t_list2);
}
