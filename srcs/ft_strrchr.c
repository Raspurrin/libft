/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:19:57 by mialbert          #+#    #+#             */
/*   Updated: 2021/11/30 15:32:08 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, t_int32 c)
{
	t_int32	len;
	char	*str2;

	len = ft_strlen((char *)str);
	str2 = (char *)str + len;
	if (c < 0 || c > 255)
		return ((char *)str);
	while (len-- >= 0)
	{
		if (*str2 == c)
			return ((void *)str2);
		str2--;
	}
	return (0);
}
