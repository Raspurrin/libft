/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:18:48 by mialbert          #+#    #+#             */
/*   Updated: 2021/11/25 12:19:37 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "../libft.h"

// static char **ft_alloc(char **out, const char *str, 
//						t_size wcount, t_size *start)
// {
// 	t_size i;

// 	i = 0;
// 	*out[i] = str[*start];
// 	*start++;
// 	i++;
// 	return (out);
// }

// static t_size **ft_wlen(const char *str, char c, 
//							t_size *wlen, t_size *start, t_size *i)
// {
// 	while (str[*i] && str[*i] == c)
// 		*i++;
// 	*start = *i;
// 	while (str[*i] && str[*i] != c)
// 	{
// 		*i++;
// 		*wlen++;
// 	}
// }

// char **ft_split(const char *str, char c)
// {
// 	t_size i;
// 	t_size j;
// 	t_size wlen;
// 	t_size wcount;
// 	t_size start;
// 	char **out;

// 	i = 0;
// 	wlen = 0;
// 	wcount = ft_wcount(str, c);
// 	out = malloc(wcount * sizeof(char *));
// 	ft_wlen(str, c, &wlen, &start, &i);
// 	wcount = 0;
// 	while (str[i])
// 	{
// 		out[wcount] = malloc(wlen * sizeof(char));
// 		// while (j < wlen)
// 		// {
// 		// 	t_size i;
// 		// 	i = 0;
// 		// 	*out[i] = str[*start];
// 		// 	*start++;
// 		// 	i++;
// 		// 	j++;
// 		// }
// 		wlen = 0;
// 		wcount++;
// 	}
// 	return (out);
// }
