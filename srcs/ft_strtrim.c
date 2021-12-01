/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:20:07 by mialbert          #+#    #+#             */
/*   Updated: 2021/12/01 12:36:07 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str, char const *set)
{
	t_size	end;

	if (!str)
		return (NULL);
	while (ft_strchr(set, *str) && *str)
		str++;
	if (!*str)
		return (ft_strdup(""));
	end = ft_strlen(str);
	while (ft_strrchr(set, str[end]) && end > 0)
		end--;
	return (ft_substr(str, 0, end + 1));
}
