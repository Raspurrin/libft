/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:18:55 by mialbert          #+#    #+#             */
/*   Updated: 2021/12/28 23:49:55 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int32_t c)
{
	char	*str2;

	if (c < 0 || c > 255)
		return ((char *)str);
	str2 = (char *)str;
	while (*str2 != c && *str2)
		str2++;
	if (*str2 == c)
		return (str2);
	return (0);
}
