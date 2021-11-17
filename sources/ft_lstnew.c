/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:12:10 by mialbert          #+#    #+#             */
/*   Updated: 2021/11/15 21:13:34 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *node;
	node = malloc(sizeof(t_list)); //how should I decide on the size with void?
	node->content = content;
	node->next = 0;
	return (node);
}