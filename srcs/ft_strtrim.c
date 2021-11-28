/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:20:07 by mialbert          #+#    #+#             */
/*   Updated: 2021/11/28 02:24:58 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str1, char const *set)
{
	char	*str2;
	char	*out;
	t_size	len;
	t_size	i;

	str2 = (char *)str1;
	len = ft_strlen(str2);
	i = 0;
	if (str1[i] == set[i])
	{
		while (str1[i] == set[i])
			i++;
		if (set[i] == '\0')
			str2 += i;
	}
	if (str1[len] == set[len])
	{
		while (str1[len] == set[len] && str1[len] != set[0])
			len--;
		if (str1[len] == set[0])
			str2[len] = '\0';
	}
	out = malloc (len + 1 * sizeof(char));
	ft_strlcpy(out, str2, len);
	return (out);
}
// ---------------------------------------------------------
// char	*ft_strtrim(char const *str1, char const *set)
// {
// 	t_int32	i;
// 	t_int32	j;
// 	char	*out;
// 	char	*start;
// 	char	*end;

// 	i = 0;
// 	j = 0;
// 	start = ft_strchr(str1, set[0]);
// 	end = ft_strrchr(str1, set[0]);
// 	while (start[i] == set[i])
// 		i++;
// 	start = start + i;
// 	i = 0;
// 	while (end[i] == set[i])
// 		i++;
// 	if (set[i])
// 	end[i] = '\0';
// 	j = ft_strlen(start);
// 	out = malloc(j + 1 * sizeof(char));
// 	i = 0;
// 	ft_strlcpy(out, start, j);
// 	return (out);
// }

	// while (i < j)
	// {
	// 	out[i] = start[i];
	// 	i++;
	// }
	// out[i] = '\0';