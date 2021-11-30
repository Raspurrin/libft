/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:19:46 by mialbert          #+#    #+#             */
/*   Updated: 2021/11/30 17:40:28 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_int32	ft_strncmp(const char *str1, const char *str2, t_size n)
{
	t_size	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((t_uint8)str1[i] && (t_uint8)str2[i] && \
			(t_uint8)str1[i] == (t_uint8)str2[i] && i < n - 1)
		i++;
	return ((t_uint8)str1[i] - (t_uint8)str2[i]);
}
