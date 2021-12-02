/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:13:58 by mialbert          #+#    #+#             */
/*   Updated: 2021/12/02 20:59:32 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_int32	ft_memcmp(const void *ptr1, const void *ptr2, t_size n)
{
	t_size	i;

	i = 0;
	if (n == 0)
		return (0);
	while (((t_uint8 *)ptr1)[i] == ((t_uint8 *)ptr2)[i] && i < n - 1)
		i++;
	return (((t_uint8 *)ptr1)[i] - ((t_uint8 *)ptr2)[i]);
}
