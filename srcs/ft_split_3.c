/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:18:48 by mialbert          #+#    #+#             */
/*   Updated: 2021/12/01 19:52:29 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static size_t	ft_wl(const char *str, char del)
// {
// 	int	wordcount;

// 	wordcount = 0;
// 	while (*str && *str != del)
// 	{
// 		wordcount++;
// 		str++;
// 	}
// 	return (wordcount);
// }

// static char	**ft_checkedge(size_t lenght)
// {
// 	char	**out;

// 	if (!lenght)
// 	{
// 		out = malloc(sizeof(char *) * 1);
// 		if (!out)
// 			return (NULL);
// 		out[0] = NULL;
// 		return (out);
// 	}
// 	out = malloc(sizeof(char *) * (lenght + 1));
// 	return (out);
// }

// static size_t	populatearr(char **out, const char 
// *str, char del, size_t *arr)
// {
// 	size_t	i;

// 	while (*str && arr[0] < arr[1])
// 	{
// 		while (*str == del && *str)
// 			str++;
// 		out[arr[0]] = malloc(sizeof(char) * ((ft_wl((char *)str, del) + 1)));
// 		if (!out[arr[0]])
// 			return (0);
// 		i = 0;
// 		while (*str != del && *str)
// 			out[arr[0]][i++] = *str++;
// 		out[arr[0]++][i] = '\0';
// 	}
// 	return (arr[0]);
// }

// char	**ft_split(const char *str, char del)
// {
// 	char	**out;
// 	size_t	arr[2];

// 	if (!str)
// 		return (NULL);
// 	arr[0] = 0;
// 	arr[1] = ft_wcount(str, del);
// 	out = ft_checkedge(arr[1]);
// 	if (!out)
// 		return (NULL);
// 	arr[0] = populatearr(out, str, del, arr);
// 	out[arr[0]] = NULL;
// 	return (out);
// }

// ----------------------------------------------------
// int	wordamount(char const *s, char c)
// {
// 	int	amount;
// 	int	i;

// 	i = 0;
// 	amount = 1;
// 	while (s[i] != 0)
// 	{
// 		if (s[i] == c)
// 		amount++;
// 	i++;
// 	}
// 	return (amount);
// }

// char	*initstring(char const *s, char c)
// {
// 	char	*str;
// 	int		len;

// 	len = 0;
// 	while (s[len] != c && s[len] != 0)
// 		len++;
// 	if (len == 0)
// 		return (NULL);
// 	str = ft_calloc(len + 1, sizeof(char));
// 	str = ft_memcpy(str, s, len);
// 	return (str);
// }

// char	**ft_split(char const *s, char c)
// {
// 	char	**ptr;
// 	int		count;
// 	int		i;

// 	i = 0;
// 	count = 0;
// 	if (!s)
// 		return (NULL);
// 	ptr = malloc((wordamount(s, c) + 1) * sizeof(char *));
// 	if (ptr == NULL)
// 		return (NULL);
// 	while (s[i] != 0)
// 	{
// 		while (s[i] == c)
// 			i++;
// 		if (s[i] == 0)
// 			break ;
// 		if ((count == 0 || s[i - 1] == c))
// 			ptr[count++] = initstring(s + i, c);
// 		i++;
// 	}
// 	ptr[count] = NULL;
// 	return (ptr);
// }

// -------------------------------------------------------------
// static size_t	ft_wordlength(const char *str, char del)
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

// char	**ft_checkedge(size_t wamount)
// {
// 	char	**out;

// 	out = ft_calloc((wamount + 1), sizeof(char *));
// 	if (!out)
// 		return (NULL);
// 	return (out);
// }

// char	**ft_split(const char *str, char del)
// {
// 	char		**out;
// 	size_t		i;
// 	size_t		wcount;
// 	size_t		wamount;

// 	wcount = 0;
// 	wamount = ft_wcount(str, del);
// 	out = ft_checkedge(wamount);
// 	if (!str)
// 		return (NULL);
// 	while (*str && wcount < wamount)
// 	{
// 		while (*str == del && *str)
// 			str++;
// 		out[wcount] = malloc(sizeof(char) * 
// 					((ft_wordlength((char *)str, del) + 1)));
// 		if (!out[wcount])
// 			return (NULL);
// 		i = 0;
// 		while (*str != del && *str)
// 			out[wcount][i++] = *str++;
// 		out[wcount][i] = '\0';
// 		wcount++;
// 	}
// 	out[wcount] = NULL;
// 	return (out);
// }

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
