/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:14:08 by mialbert          #+#    #+#             */
/*   Updated: 2021/12/02 22:31:00 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, t_size n)
{
	t_size	i;

	i = 0;
	while (i < n && dst != src)
	{
		((t_uint8 *)dst)[i] = ((t_uint8 *)src)[i];
		i++;
	}
	return (dst);
}
