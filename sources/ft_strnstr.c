/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:19:51 by mialbert          #+#    #+#             */
/*   Updated: 2021/11/17 19:38:33 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, t_size n)
{
	t_size	i;
	t_size	start;

	i = 0;
	if (!needle)
		return ((char *)haystack);
	while (i < n)
	{
		if (needle[i] == haystack[i])
		{
			start = i;
			while (needle[i] == haystack[i])
			{
				if (needle[i] == '\0')
					return ((char *)haystack + start);
				i++;
			}
		}
		i++;
	}
	return (0);
}
