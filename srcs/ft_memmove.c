/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:14:14 by mialbert          #+#    #+#             */
/*   Updated: 2021/11/25 12:36:09 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, t_size n)
{
	t_uint8	*dst2;
	t_uint8 *src2;

	dst2 = (t_uint8 *)dst;
	src2 = (t_uint8 *)src;
	if (src > dst)
		return (ft_memcpy(dst, src, n));
	while (n-- > 0)
		dst2[n] = src2[n];
	return (dst);
}
