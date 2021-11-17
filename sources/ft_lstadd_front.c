/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:11:07 by mialbert          #+#    #+#             */
/*   Updated: 2021/11/15 21:20:47 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*tmp;
	tmp = *lst; // had to do this to fix double pointer assignment. Don't quite understand completely ... O_o
	*lst = new;
	new->next = tmp;
	//sjeez I don't know what I'm doing bbl
}