/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:18:48 by mialbert          #+#    #+#             */
/*   Updated: 2021/11/28 12:38:48 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_wordlength(const char *str, char del)
{
	int	wcount;
	
	wcount = 0;
	while(*str && *str != del)
	{
		wcount++;
		str++;
	}
	return (wcount);
}

char	**ft_checkedge(size_t wamount)
{
	char **out;

	if(!wamount)
	{
		out = malloc(sizeof(char*) * 1);
		if (!out)
			return (NULL);
		out[0] = NULL;
		return (out);
	}
	out = malloc(sizeof(char*) * (wamount + 1));
	return (out);
}

char	**ft_2split(const char *str, char del)
{
	char		**out;
	size_t		i;
	size_t		wcount;
	size_t		wamount;

	wcount = 0;
	wamount = ft_wcount(str, del);
	out = ft_checkedge(wamount);
	if (!out)
		return NULL;
	while(*str && wcount < wamount)
	{
		while (*str == del && *str)
			str++;
		out[wcount] = malloc(sizeof(char) * \
					((ft_wordlength((char*)str, del) + 1)));
		if (!out[wcount])
			return NULL;
		i = 0;
		while (*str != del && *str)
			out[wcount][i++] = *str++;

		out[wcount][i] = '\0';
		wcount++;
	}
	out[wcount] = NULL;
	return out;
}

// --------------------------------------------------------
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
// 	int	wcount;

// 	wcount = 0;
// 	while (*str && *str != del)
// 	{
// 		wcount++;
// 		str++;
// 	}
// 	return (wcount);
// }

// char	**ft_malloc(char **out, int wamount)
// {
// 	if (!wamount)
// 	{
// 		out = malloc(sizeof(char *) * 1);
// 		out[0] = NULL;
// 	}
// 	else
// 		out = malloc(sizeof(char *) * (wamount + 1));
// 	return (out);
// }

// char	**ft_split(const char *str, char del)
// {
// 	char	**out;
// 	int		i;
// 	int		wcount;
// 	int		wamount;

// 	wcount = 0;
// 	wamount = getnumofwords((char *)str, del);
// 	out = ft_malloc(out, wamount);
// 	while (*str && wcount <= wamount)
// 	{
// 		while (*str == del && *str)
// 			str++;
// 		out[wcount] = malloc(sizeof(char) *
// 					((ft_wordlength((char *)str, del) + 1)));
// 		i = 0;
// 		while (*str != del && *str)
// 			out[wcount][i++] = *str++;
// 		out[wcount][i] = '\0';
// 		wcount++;
// 	}
// 	out[wcount] = NULL;
// 	return (out);
// }

// ---------------------------------------------------------
// static size_t	ft_wordlength(const char *str, char del)
// {
// 	size_t	i;

// 	i = 0;
// 	while (*str && *str != del)
// 	{
// 		i++;
// 		str++;
// 	}
// 	return (i);
// }

// char	**ft_malloc(int wamount)
// {
// 	char	**out;

// 	if (!wamount)
// 	{
// 		out = malloc(sizeof(char *) * 1);
// 		out[0] = NULL;
// 	}
// 	else
// 		out = malloc (sizeof(char *) * wamount);
// 	return (out);
// }

// char	**ft_split(const char *str, char del)
// {
// 	char	**out;
// 	size_t	i;
// 	size_t	wamount;
// 	size_t	wamount;

// 	wamount = 0;
// 	wamount = ft_wamount((char *)str, del);
// 	out = ft_malloc(wamount);
// 	while (*str && wamount < wamount)
// 	{
// 		while (*str == del && *str)
// 			str++;
// 		out[wamount] = malloc(sizeof(char) 
// 					* ft_wordlength((char *)str, del) + 1);
// 		i = 0;
// 		while (*str != del && *str)
// 			out[wamount][i++] = *str++;
// 		out[wamount][i] = '\0';
// 		wamount++;
// 	}
// 	out[wamount] = NULL;
// 	return (out);
// }

// -------------------------------------------------------
// #include "libft.h"

// static char **ft_alloc(char **out, const char *str, 
//						t_size wamount, t_size *start)
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
// 	t_size wamount;
// 	t_size start;
// 	char **out;

// 	i = 0;
// 	wamount = 0;
// 	wamount = ft_wamount(str, c);
// 	out = malloc(wamount * sizeof(char *));
// 	ft_wamount(str, c, &wamount, &start, &i);
// 	wamount = 0;
// 	while (str[i])
// 	{
// 		out[wamount] = malloc(wamount * sizeof(char));
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
// 		wamount++;
// 	}
// 	return (out);
// }
