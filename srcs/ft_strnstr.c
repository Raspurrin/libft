/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:19:51 by mialbert          #+#    #+#             */
/*   Updated: 2021/12/02 00:48:46 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, t_size n)
{
	t_size	i;
	t_size	j;
	t_size	start;

	i = 0;
	j = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] && i < n)
	{
		if (needle[j] == haystack[i])
		{
			start = i;
			while (i + j < n && needle[j] && needle[j] == haystack[i + j])
				j++;
			if (needle[j] == '\0')
				return ((char *)haystack + start);
		}
		j = 0;
		i++;
	}
	return (NULL);
}
