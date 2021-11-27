/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:14:14 by mialbert          #+#    #+#             */
/*   Updated: 2021/11/25 12:36:09 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, t_size n)
{
	t_size	i;
	char	*dst2;
	char	*src2;
	char	*temp;

	i = 0;
	dst2 = (char *)dst;
	src2 = (char *)src;
	temp = malloc(n * sizeof(char));
	if (!temp)
		return (NULL);
	while (i < n)
	{
		temp[i] = src2[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		dst2[i] = temp[i];
		i++;
	}
	return ((void *)dst);
}
