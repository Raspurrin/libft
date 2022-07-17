/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:18:38 by mialbert          #+#    #+#             */
/*   Updated: 2022/07/15 19:53:27 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_realloc(void *ptr, size_t size)
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
