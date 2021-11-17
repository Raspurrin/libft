/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:19:02 by mialbert          #+#    #+#             */
/*   Updated: 2021/11/15 21:19:03 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char		*ft_strdup(const char *str)
{
	t_size i;
	t_size len;
	char *out;

	i = 0;
	len = ft_strlen((char *)str);
	out = malloc(len * sizeof(char));
	while(i < len)
	{
		out[i] = str[i];
		i++;
	}
	out[i] = '\0';
	return (out);
}