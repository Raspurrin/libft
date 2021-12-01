/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:20:13 by mialbert          #+#    #+#             */
/*   Updated: 2021/12/02 00:48:54 by mialbert         ###   ########.fr       */
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
	if (start > len || start > slen)
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
