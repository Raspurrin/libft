/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 14:42:43 by mialbert          #+#    #+#             */
/*   Updated: 2021/12/29 00:31:51 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *str, void (*f)(uint32_t, char*))
{
	size_t	i;

	i = 0;
	if (!str)
		return ;
	while (str[i])
	{
		f(i, &str[i]);
		i++;
	}
}
