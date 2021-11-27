/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:20:13 by mialbert          #+#    #+#             */
/*   Updated: 2021/11/27 15:31:57 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, t_uint32 start, t_size len)
{
	char	*out;
	t_size	slen;

	slen = ft_strlen(str);
	if (!str)
		return (NULL);
	if (start > len)
		return (ft_strdup(""));
	if (len > slen - start)
		return (ft_strdup(str + start));
	out = malloc((len + 1) * sizeof(char));
	if (!out)
		return (NULL);
	ft_memcpy(out, str + start, len);
	out[len] = '\0';
	return (out);
}

	// t_size	i;
	// char	*out;

	// i = 0;
	// out = malloc(len - start * sizeof(char));
	// while (i < len)
	// {
	// 	out[i++] = ((char *)str)[start++];
	// }
	// ((char *)out)[i] = '\0';
	// return ((char *)out);