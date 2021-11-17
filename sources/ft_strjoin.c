/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:19:11 by mialbert          #+#    #+#             */
/*   Updated: 2021/11/15 21:19:13 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char		*ft_strjoin(char const *str1, char const *str2)
{
	t_size 	i;
	t_size	j;
	t_size str1len;
	t_size str2len;
	char	*out;

	i = 0;
	j = 0;
	if (!str1 || !str2)
		return (0);
	str1len = ft_strlen((char *)str1);
	str2len = ft_strlen((char *)str2);
	out = malloc((str1len * sizeof(char)) + (str2len * sizeof(char)));
	ft_memcpy(out, str1, str1len);
	ft_memcpy(out, str2, str2len);
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