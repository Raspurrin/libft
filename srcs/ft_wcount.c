/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wcount.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:20:30 by mialbert          #+#    #+#             */
/*   Updated: 2021/12/29 00:21:17 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_wcount(const char *str, char del)
{
	size_t	i;
	size_t	wcount;

	i = 0;
	wcount = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == del))
			i++;
		if (str[i] && (str[i] != del))
			wcount++;
		while (str[i] && (str[i] != del))
			i++;
	}
	return (wcount);
}
