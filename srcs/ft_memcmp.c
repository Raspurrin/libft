/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:13:58 by mialbert          #+#    #+#             */
/*   Updated: 2021/11/30 15:28:39 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_int32	ft_memcmp(const void *ptr1, const void *ptr2, t_size n)
{
	t_size	i;

	i = 0;
	if (n == 0)
		return (0);
	while (((uint8_t *)ptr1)[i] == ((uint8_t *)ptr2)[i] && i < n - 1)
		i++;
	return (((uint8_t *)ptr1)[i] - ((uint8_t *)ptr2)[i]);
}
