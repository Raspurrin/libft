/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:19:02 by mialbert          #+#    #+#             */
/*   Updated: 2021/12/01 12:25:23 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strdup(const char *str)
{
	t_size	len;
	char	*out;

	len = ft_strlen((char *)str) + 1;
	out = malloc(len * sizeof(char));
	if (!out)
		return (NULL);
	ft_memcpy(out, str, len);
	return (out);
}
