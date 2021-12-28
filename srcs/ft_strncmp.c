/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:19:46 by mialbert          #+#    #+#             */
/*   Updated: 2021/12/29 00:03:28 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int32_t	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((uint8_t)str1[i] && (uint8_t)str2[i] && \
			(uint8_t)str1[i] == (uint8_t)str2[i] && i < n - 1)
		i++;
	return ((uint8_t)str1[i] - (uint8_t)str2[i]);
}
