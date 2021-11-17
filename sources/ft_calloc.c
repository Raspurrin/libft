/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 20:11:33 by mialbert          #+#    #+#             */
/*   Updated: 2021/11/15 20:11:35 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>

void		*ft_calloc(size_t num, size_t size)
{
	t_size i;
	char *out;

	i = 0;
	out = malloc(num * size);
	while (i < num)
	{
		out = '\0';
		i++;
	}
	return (out);
}