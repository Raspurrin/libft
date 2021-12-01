/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 20:47:06 by mialbert          #+#    #+#             */
/*   Updated: 2021/12/01 18:52:17 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_allocate(char **out, const char *str, char delim, t_size wcount)
{
	t_size	windex;
	t_size	outlen;

	windex = 0;
	outlen = 0;
	while (windex < wcount)
	{
		while (*str == delim)
			str++;
		while (str[outlen] != delim)
			outlen++;
		out[windex] = ft_substr(str, 0, outlen);
		if (!out[windex])
			return (FALSE);
		str += outlen;
		windex++;
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

char	**ft_split(const char *str, char delim)
{
	t_size	wcount;
	char	**out;

	if (!str)
		return (NULL);
	wcount = ft_wcount(str, delim);
	out = (char **)ft_calloc(wcount + 1, sizeof(char *));
	if (!out)
		return (NULL);
	if (!ft_allocate(out, str, delim, wcount))
	{
		ft_cleanup(out);
		free(out);
		return (NULL);
	}
	return (out);
}
