/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:19:20 by mialbert          #+#    #+#             */
/*   Updated: 2021/11/19 00:18:37 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_size	ft_strlcat(char *dst, const char *src, t_size size)
{
	t_size	i;
	t_size	j;
	t_size dstlen;

	i = 0;
	j = 0;
	if (size == 0)
		return (ft_strlen((char *)src));
	while (dst[i])
	{
		i++;
	}
	dstlen = i;
	if (size == dstlen - 1)
		return (dstlen - 1 + ft_strlen((char *)src));
	while(src[j] && i < size - 1)
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (dstlen + ft_strlen((char *)src));
}

// I know this looks like shit but 
// 	if (size == dstlen - 1)
//		return (dstlen - 1 + ft_strlen((char *)src)); is to fix an edge case
// I only suffered a bit. Thank you :)
//
// return the length of the source + dst until null terminator
// I have = 6 | a cookie = 9. Together they are 15. Max return value
// Lenght of source. 9 :) Minimum return value