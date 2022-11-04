/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:18:38 by mialbert          #+#    #+#             */
/*   Updated: 2022/11/04 01:04:59 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_realloc(void *ptr, size_t size)
{
	size_t	i;
	char	*out;

	i = 0;
	if (!ptr)
		return (NULL);
	out = malloc(size);
	if (!out)
		return (NULL);
	while (size-- > 0)
	{
		out[i] = ((uint8_t *)ptr)[i];
		i++;
	}
	free(ptr);
	return (out);
}
