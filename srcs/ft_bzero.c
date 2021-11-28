/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 20:11:24 by mialbert          #+#    #+#             */
/*   Updated: 2021/11/27 23:28:06 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	ft_bzero(void *src, t_size n)
{
	t_size	i;
	t_uint8	*src2;

	i = 0;
	src2 = (t_uint8 *)src;
	while (i < n)
		src2[i++] = '\0';
}
