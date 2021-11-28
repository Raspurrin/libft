/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:18:48 by mialbert          #+#    #+#             */
/*   Updated: 2021/11/28 00:41:59 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static int	getnumofwords(char *str, char del)
// {
// 	int	wordcount;

// 	wordcount = 0;
// 	if (!str || !del)
// 		return (0);
// 	while (*str != '\0')
// 	{
// 		while (*str == del && *str)
// 			str++;
// 		if (*str != del && *str)
// 			wordcount++;
// 		while (*str != del && *str)
// 			str++;
// 	}
// 	return (wordcount);
// }
// // static char*
// //Noice :)

// static int	ft_wordlength(const char *str, char del)
// {
// 	int	counter;

// 	counter = 0;
// 	while (*str && *str != del)
// 	{
// 		counter++;
// 		str++;
// 	}
// 	return (counter);
// }

// char	**ft_malloc(char **out, int wlen)
// {
// 	if (!wlen)
// 	{
// 		out = malloc(sizeof(char *) * 1);
// 		out[0] = NULL;
// 	}
// 	else
// 		out = malloc(sizeof(char *) * (wlen + 1));
// 	return (out);
// }

// char	**ft_split(const char *str, char del)
// {
// 	char	**out;
// 	int		i;
// 	int		counter;
// 	int		wlen;

// 	counter = 0;
// 	wlen = getnumofwords((char *)str, del);
// 	out = ft_malloc(out, wlen);
// 	while (*str && counter <= wlen)
// 	{
// 		while (*str == del && *str)
// 			str++;
// 		out[counter] = malloc(sizeof(char) *
// 					((ft_wordlength((char *)str, del) + 1)));
// 		i = 0;
// 		while (*str != del && *str)
// 			out[counter][i++] = *str++;
// 		out[counter][i] = '\0';
// 		counter++;
// 	}
// 	out[counter] = NULL;
// 	return (out);
// }

// ---------------------------------------------------------
static size_t	ft_wordlength(const char *str, char del)
{
	size_t	i;

	i = 0;
	while (*str && *str != del)
	{
		i++;
		str++;
	}
	return (i);
}

char	**ft_malloc(int wamount)
{
	char	**out;

	if (!wamount)
	{
		out = malloc(sizeof(char *) * 1);
		out[0] = NULL;
	}
	else
		out = malloc (sizeof(char *) * wamount);
	return (out);
}

char	**ft_split(const char *str, char del)
{
	char	**out;
	size_t	i;
	size_t	wcount;
	size_t	wamount;

	wcount = 0;
	wamount = ft_wcount((char *)str, del);
	out = ft_malloc(wamount);
	while (*str && wcount < wamount)
	{
		while (*str == del && *str)
			str++;
		out[wcount] = malloc(sizeof(char) \
					* ft_wordlength((char *)str, del) + 1);
		i = 0;
		while (*str != del && *str)
			out[wcount][i++] = *str++;
		out[wcount][i] = '\0';
		wcount++;
	}
	out[wcount] = NULL;
	return (out);
}

// -------------------------------------------------------
// #include "libft.h"

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

// static t_size **ft_wamount(const char *str, char c, 
//							t_size *wamount, t_size *start, t_size *i)
// {
// 	while (str[*i] && str[*i] == c)
// 		*i++;
// 	*start = *i;
// 	while (str[*i] && str[*i] != c)
// 	{
// 		*i++;
// 		*wamount++;
// 	}
// }

// char **ft_split(const char *str, char c)
// {
// 	t_size i;
// 	t_size j;
// 	t_size wamount;
// 	t_size wcount;
// 	t_size start;
// 	char **out;

// 	i = 0;
// 	wamount = 0;
// 	wcount = ft_wcount(str, c);
// 	out = malloc(wcount * sizeof(char *));
// 	ft_wamount(str, c, &wamount, &start, &i);
// 	wcount = 0;
// 	while (str[i])
// 	{
// 		out[wcount] = malloc(wamount * sizeof(char));
// 		// while (j < wamount)
// 		// {
// 		// 	t_size i;
// 		// 	i = 0;
// 		// 	*out[i] = str[*start];
// 		// 	*start++;
// 		// 	i++;
// 		// 	j++;
// 		// }
// 		wamount = 0;
// 		wcount++;
// 	}
// 	return (out);
// }
