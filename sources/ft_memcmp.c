/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:13:58 by mialbert          #+#    #+#             */
/*   Updated: 2021/11/17 19:46:35 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_int32	ft_memcmp(const void *ptr1, const void *ptr2, t_size n)
{
	t_size	i;
	char	*ptr3;
	char	*ptr4;

	i = 0;
	ptr3 = (char *)ptr1;
	ptr4 = (char *)ptr2;
	if (n == 0)
		return (0);
	while (ptr3[i] == ptr4[i] && i < n)
		i++;
	return (ptr3[i] - ptr4[i]);
}
