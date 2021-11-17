/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:19:20 by mialbert          #+#    #+#             */
/*   Updated: 2021/11/15 21:19:21 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_size		ft_strlcat(char *dst, const char *src, t_size size)
{
	t_size i;
	t_size j;

	i = 0;
	j = 0;
	while (dst)
		i++;
	while (src && j < size)
		dst[i] = src[j];
	dst[i] = '\0';
	return (ft_strlen(src));
}