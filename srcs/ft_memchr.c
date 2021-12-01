/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:13:51 by mialbert          #+#    #+#             */
/*   Updated: 2021/11/30 23:41:54 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, t_int32 c, t_size n)
{
	t_uint8	*ptr2;

	ptr2 = (t_uint8 *)ptr;
	while (n-- > 0)
	{
		if (*ptr2 == (t_uint8)c)
			return ((void *)ptr2);
		ptr2++;
	}
	return (0);
}
