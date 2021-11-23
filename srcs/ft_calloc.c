/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 20:11:33 by mialbert          #+#    #+#             */
/*   Updated: 2021/11/19 21:56:51 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>

void	*ft_calloc(t_size num, t_size size)
{
	t_size	i;
	char	*out;

	i = 0;
	out = malloc(num * size);
	if (!(out))
		return (NULL);
	while (i < num)
	{
		out = '\0';
		i++;
	}
	return (out);
}

