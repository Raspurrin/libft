/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:18:55 by mialbert          #+#    #+#             */
/*   Updated: 2021/11/17 19:52:04 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strchr(const char *str, t_int32 c)
{
	t_size	i;
	char	*str2;

	i = 0;
	str2 = (char *)str;
	while (str[i])
	{
		if (*str2 == c)
			return ((void *)str2);
		i++;
		str2++;
	}
	return (0);
}
