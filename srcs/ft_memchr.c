/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:13:51 by mialbert          #+#    #+#             */
/*   Updated: 2021/12/29 00:03:28 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int32_t c, size_t n)
{
	uint8_t	*ptr2;

	ptr2 = (uint8_t *)ptr;
	while (n-- > 0)
	{
		if (*ptr2 == (uint8_t)c)
			return ((void *)ptr2);
		ptr2++;
	}
	return (0);
}
