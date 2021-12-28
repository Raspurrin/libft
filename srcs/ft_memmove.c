/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:14:14 by mialbert          #+#    #+#             */
/*   Updated: 2021/12/29 00:03:28 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (!dst && !src)
		return (NULL);
	if (src > dst)
		return (ft_memcpy(dst, src, n));
	while (n-- > 0)
		((uint8_t *)dst)[n] = ((uint8_t *)src)[n];
	return (dst);
}
