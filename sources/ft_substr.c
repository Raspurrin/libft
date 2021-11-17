/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:20:13 by mialbert          #+#    #+#             */
/*   Updated: 2021/11/15 21:20:14 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char		*ft_substr(char const *str, t_uint32 start, t_size len)
{
	t_size i;
	char	*out;

	i = 0;
	out = malloc(len - start * sizeof(char));
	while (i < len)
	{
		out[i++] = ((char *)str)[start++];
	}
	((char *)out)[i] = '\0';
	return ((char *)out);
}