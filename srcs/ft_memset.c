/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:14:21 by mialbert          #+#    #+#             */
/*   Updated: 2021/11/17 19:45:01 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memset(void *src, t_int32 c, t_size n)
{
	t_size	i;
	char	*src2;

	i = 0;
	src2 = (char *)src;
	while (i < n)
		src2[i++] = c;
	return ((void *)src2);
}
