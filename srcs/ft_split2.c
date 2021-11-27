/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:18:48 by mialbert          #+#    #+#             */
/*   Updated: 2021/11/25 12:36:09 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
// #include <stdlib.h>

// t_size	ft_wlen(char const *str, char c, t_size *i)
// {
// 	t_size	wlen;

// 	while (str[*i] == c)
// 		*i++;
// 	while (str[*i] != c)
// 	{
// 		wlen++;
// 		*i++;
// 	}
// 	return (wlen);
// }

// char	**ft_split(char const *str, char c)
// {
// 	t_size	i;
// 	t_size	out;
// 	t_size	wcount;
// 	t_size	wlen;

// 	wcount = ft_wcount(str, c);
// 	out = malloc(wcount * sizeof(char *));
// 	wlen = ft_wlen(str, c, &i);
// }