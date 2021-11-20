/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:19:11 by mialbert          #+#    #+#             */
/*   Updated: 2021/11/19 22:04:08 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	t_size	str1len;
	t_size	str2len;
	char	*out;

	if (!str1 || !str2)
		return (0);
	str1len = ft_strlen((char *)str1);
	str2len = ft_strlen((char *)str2);
	out = ft_calloc((str1len + str2len + 1), sizeof(char));
	if (!out)
		return (0);
	ft_strlcpy(out, str1, str1len);
	ft_strlcpy(out + str1len, str2, str2len);
	return (out);
}
	// while (i < str1len)
	// {
	// 	out[i] = ((char *)str1)[i];
	// 	i++;
	// }
	// while (j < str2len)
	// {
	// 	out[i] = ((char *)str2)[j];
	// 	i++;
	// 	j++;
	// }