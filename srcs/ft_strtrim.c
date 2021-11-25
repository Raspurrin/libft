/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:20:07 by mialbert          #+#    #+#             */
/*   Updated: 2021/11/25 12:19:37 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "../libft.h"

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