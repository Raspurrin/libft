/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:19:27 by mialbert          #+#    #+#             */
/*   Updated: 2021/11/17 19:39:51 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_uint32	ft_strlcpy(char *dst, const char *src, t_size size)
{
	t_size	i;

	i = -1;
	if (size == 0)
		return (0);
	while (src[i++] && i < size - 1)
		dst[i] = src[i];
	dst[i] = '\0';
	return (ft_strlen((char *)src));
}
