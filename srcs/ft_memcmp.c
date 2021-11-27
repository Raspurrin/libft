/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:13:58 by mialbert          #+#    #+#             */
/*   Updated: 2021/11/26 17:26:02 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_int32	ft_memcmp(const void *ptr1, const void *ptr2, t_size n)
{
	t_size	i;
	uint8_t	*ptr3;
	uint8_t	*ptr4;

	i = 0;
	ptr3 = (uint8_t *)ptr1;
	ptr4 = (uint8_t *)ptr2;
	if (n == 0)
		return (0);
	while (ptr3[i] == ptr4[i] && i < n - 1)
		i++;
	return (ptr3[i] - ptr4[i]);
}
