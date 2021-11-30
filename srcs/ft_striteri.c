/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 14:42:43 by mialbert          #+#    #+#             */
/*   Updated: 2021/11/30 13:41:57 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *str, void (*f)(t_uint32, char*))
{
	t_size	i;

	i = 0;
	if (!str)
		return ;
	while (str[i])
	{
		f(i, &str[i]);
		i++;
	}
}
