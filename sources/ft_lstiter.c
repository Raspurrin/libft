/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:11:57 by mialbert          #+#    #+#             */
/*   Updated: 2021/11/15 21:20:55 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list *tmp;
	tmp = lst;

	while (tmp != 0)
	{
		f(tmp->content);
		tmp = tmp->content;
	}
}