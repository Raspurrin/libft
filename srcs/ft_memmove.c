/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:14:14 by mialbert          #+#    #+#             */
/*   Updated: 2021/11/30 16:50:17 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, t_size n)
{
	if (!dst && !src)
		return (NULL);
	if (src > dst)
		return (ft_memcpy(dst, src, n));
	while (n-- > 0)
		((t_uint8 *)dst)[n] = ((t_uint8 *)src)[n];
	return (dst);
}
