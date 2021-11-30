/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:19:20 by mialbert          #+#    #+#             */
/*   Updated: 2021/11/30 22:34:15 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_size	ft_strlcat(char *dst, const char *src, t_size size)
{
	t_size	i;
	t_size	j;
	t_size	dstlen;
	t_size	srclen;

	i = 0;
	j = 0;
	srclen = ft_strlen((char *)src);
	dstlen = ft_strlen(dst);
	if (size == 0)
		return (srclen);
	if (size < dstlen)
		return (srclen + size);
	while (dst[i])
		i++;
	dstlen = i;
	while (src[j] && i < size - 1)
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (dstlen + srclen);
}
