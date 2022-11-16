/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:18:38 by mialbert          #+#    #+#             */
/*   Updated: 2022/11/16 15:04:22 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdio.h>

void	*ft_realloc(void *ptr, size_t size)
{
	size_t	i;
	char	*out;
	uint8_t	*ptr2;

	i = 0;
	ptr2 = (uint8_t *)ptr; 
	if (!ptr)
		return (NULL);
	out = malloc(size);
	if (!out)
		return (NULL);
	while (ptr2[i])
	{
		out[i] = ptr2[i];
		i++;
	}
	return (out);
}
