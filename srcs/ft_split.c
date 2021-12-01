/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 20:47:06 by mialbert          #+#    #+#             */
/*   Updated: 2021/12/02 00:21:28 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_bool	allocate(char **out, const char *str, char del, \
				t_size wcount)
{
	t_size	count;
	t_size	index;

	index = 0;
	while (*str && index < wcount)
	{
		count = 0;
		while (*str == del && *str)
			str++;
		while (str[count] && str[count] != del)
			count++;
		out[index] = malloc(sizeof(char) * (count + 1));
		if (!out[index])
			return (FALSE);
		ft_strlcpy(out[index], str, count + 1);
		str += count;
		index++;
	}
	return (TRUE);
}

void	ft_cleanup(char **out)
{
	while (*out)
	{
		free(*out);
		out++;
	}
}

char	**ft_split(const char *str, char del)
{
	char	**out;
	t_size	wcount;

	if (!str)
		return (NULL);
	wcount = ft_wcount(str, del);
	out = malloc(sizeof(char *) * (wcount + 1));
	if (!out)
		return (NULL);
	if (!allocate(out, str, del, wcount))
	{
		ft_cleanup(out);
		return (NULL);
	}
	out[wcount] = NULL;
	return (out);
}
