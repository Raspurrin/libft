/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 20:11:24 by mialbert          #+#    #+#             */
/*   Updated: 2021/11/16 17:05:57 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <string.h>

void		*ft_bzero(void *src, size_t n)
{
	t_size i;
	char *src2;

	i = 0;
	src2 = (char *)src;
	while(i < n)
		src2[i++] = '\0';
	return (src);
}