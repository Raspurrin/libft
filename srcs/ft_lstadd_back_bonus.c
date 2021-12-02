/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:11:00 by mialbert          #+#    #+#             */
/*   Updated: 2021/12/02 23:49:55 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back_bonus(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!lst)
		return ;
	tmp = *lst;
	tmp = ft_lstlast_bonus(tmp);
	tmp = new;
	tmp->next = NULL;
}
