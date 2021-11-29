/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 20:47:06 by mialbert          #+#    #+#             */
/*   Updated: 2021/11/28 20:47:06 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Splits a string by a given delimiter.
 * 
 * @param str 
 * @param delim 
 * @return char** 
 */
t_bool	ft_allocate(char **out, const char *str, char delim, t_size wcount)
{
	t_size	windex;
	t_size	outlen;

	windex = 0;
	outlen = 0;
	while (windex < wcount)
	{
		// 1. Skip every char thats a delimiter
		while (*str == delim)
			str++;
		// 2. Give me length from sindex on till the next delimiter.
		while (str[outlen] != delim)
			outlen++;
		out[windex] = ft_substr(str, 0, outlen);
		if (!out[windex])
			return (FALSE);
		// 3. Increment sindex with outlen
		str += outlen;
		// 4. Increment windex after we added a new word, done
		windex++;
	}
	return (TRUE);
}

void	ft_cleanup(char **out)
{
	while(*out)
	{
		free(*out);
		out++;
	}
}

char	**ft_split(const char *str, char delim)
{
	t_size	wcount;
	char	**out;

	wcount = ft_wcount(str, delim);
	if (!str || !wcount )
		return (NULL);
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
