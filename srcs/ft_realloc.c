/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:18:38 by mialbert          #+#    #+#             */
/*   Updated: 2021/11/30 01:56:40 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, t_size size)
{
	char	*out;

	if (!ptr)
		return (NULL);
	out = malloc(size);
	if (!out)
		return (NULL);
	while (size-- > 0)
		*out++ = (*(char *)ptr++);
	return (out);
}
