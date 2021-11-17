/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:18:48 by mialbert          #+#    #+#             */
/*   Updated: 2021/11/15 21:18:50 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static	char	**ft_alloc(char **out, const char *str, t_size wcount, t_size wlen, t_size start);
char		**ft_split(char const *str, char c)
{
	t_size	i;
	t_size	wlen;
	t_size	wcount;
	t_size	start;
	char	**out;

	i = 0;
	wlen = 0;
	wcount = ft_wcount(str, c);
	out = malloc(wcount * sizeof(char));
	wcount = 0;
	while (str[i])
	{
		while(str[i] && str[i] == c)
			i++;
		start = i;
		while (str[i] && str[i] != c)
		{
			i++;
			wlen++;
		}
		out[wcount] = malloc(wlen - 1 * sizeof(char));
		ft_alloc(out, str, wcount, wlen, start);
		wlen = 0;
		wcount++;
	}
	return (out);
}

static	char	**ft_alloc(char **out, const char *str, t_size wcount, t_size wlen, t_size start)
{
	t_size i;

	i = 0;
	while (i < wlen)
	{
		out[wcount][i] = str[start];
		start++;
		i++;
	}
	return (out);
}