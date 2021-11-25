/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:19:20 by mialbert          #+#    #+#             */
/*   Updated: 2021/11/25 12:19:37 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_size	ft_strlcat(char *dst, const char *src, t_size size)
{
	t_size	i;
	t_size	j;
	t_size	dstlen;
	t_size	srclen;

	i = 0;
	j = 0;
	srclen = ft_strlen((char *)src);
	if (size == 0)
		return (srclen);
	while (dst[i])
		i++;
	dstlen = i;
	if (size == dstlen - 1)
		return (dstlen - 1 + srclen);
	while (src[j] && i < size - 1)
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (dstlen + srclen);
}

// I know this looks like shit but 
// 	if (size == dstlen - 1)
//		return (dstlen - 1 + srclen); is to fix an edge case
// I only suffered a bit.
//
// return the length of the source + dst until null terminator
// I have = 6 | a cookie = 9. Together they are 15. Max return value
// Lenght of source. 9 :) Minimum return value
// size is up to how long the concatenated string will 
// be from the first element of the new string